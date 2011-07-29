#define _WINSOCKAPI_

#include <windows.h>
#include <tchar.h>
#include <strsafe.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "RakPeerInterface.h"
#include "BitStream.h"
#include "MessageIdentifiers.h"
#include "GetTime.h"
#include "RakSleep.h" 

#include <cstdio>
#include <memory.h>
#include <cstring>
#include "Gets.h"
#include "Kbhit.h"

#include "ptgreyInterface.h"

#include <stdarg.h>
#include <time.h>
#include <iostream>

#define MAX_THREADS 1
#define PORT 2100

using namespace std;
//using namespace RakNet;

/// Thread prototypes.
void CALLBACK PacketReceiverThread(void*,BOOLEAN) ;
DWORD WINAPI DiskWriterThread(LPVOID lpParam);
DWORD WINAPI CaptureThread(LPVOID lpParam);

/// Global variables
bool isServer;
bool packetFromServer;
RakNet::RakPeerInterface *rakClient;
RakNet::RakPeerInterface *rakServer;
RakNet::Packet *packet;
RakNet::Time timeRak;
extern Camera cam;
bool isHalt = false;
bool bStopCapture = false;
bool bCaptureThreadDone = true;

/// Thread pool data block.
typedef struct _imageData {
	int seqNum;
	char fName[0xff];
	IplImage *imgStorage;	/// Note that. this should be released at finally.
	Image *ptgreyImgStruct;
} HyonImageData;

/// image remote send
#pragma pack(push,1)
typedef struct _imageBuffer{
	int rows; // 4
	int cols; // 4
	char* pData; // 4 byte.
	int type; // 4
	int pSize; // 4
} RemoteImageData;
#pragma pack(pop)

long activeItems = 1L;		/// Thread pool counter.
HANDLE hStorageThreadHandle;/// Stay until save is done.
long frameNum = 1L;

/// Define image extension. JPG is default.
unsigned char imageFileExtension[4] = {'j','p','g',0};

bool isConnected = false;
bool isCaptureStarted = false;
bool gotPong = false;

time_t rawtime;
char fPrefix[0xff];

bool isImageRequested = false;	/// image remote send.

/// OpenCV
cv::Mat frame;
cv::VideoCapture capture;

/// System meassge define.
enum
{
	ID_START_CAPTURE = ID_USER_PACKET_ENUM,	/// Let's start capture!
	ID_STOP_CAPTURE,							/// Stop capture please.
	ID_CHECK_LIFE,
	ID_THIS_IS_CHAT,
	ID_SEND_IMAGE,
	ID_IMAGE_BUFFER
};

void ViewRemoteImage(void)
{
	char message[2] = {ID_SEND_IMAGE,0};

	if(isServer == true)
	{
		rakServer->Send((char*)message,2,HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
	}

	time(&rawtime);
	std::ostringstream sTime;
	std::string t;
	sTime << ctime(&rawtime);
	t = sTime.str();
	t = t.substr(0,t.length()-1);
	
	std::cout << "[" << t;

	printf("] ID_SEND_IMAGE sent to client\n");
}

void StartCaptureTrigger(void)
{
	char message[2] = {ID_START_CAPTURE,0};

	if(isServer == true)
	{
		rakServer->Send((char*)message,2,HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
	}

	time(&rawtime);
	std::ostringstream sTime;
	std::string t;
	sTime << ctime(&rawtime);
	t = sTime.str();
	t = t.substr(0,t.length()-1);
	
	std::cout << "[" << t;

	printf("] ID_START_CAPTURE sent to client\n");
}

void StopCaptureTrigger(void)
{
	char message[2] = {ID_STOP_CAPTURE,0};

	if(isServer == true)
	{
		rakServer->Send((char*)message,2,HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
	}

	time(&rawtime);
	std::ostringstream sTime;
	std::string t;
	sTime << ctime(&rawtime);
	t = sTime.str();
	t = t.substr(0,t.length()-1);
	
	std::cout << "[" << t;

	printf("] ID_STOP_CAPTURE sent to client\n");
}

/// Server, Client both can use this function to tell to the network.
void PrintToNetwork(char* format,...)
{
	char buf[4096];

	buf[0] = ID_THIS_IS_CHAT;

	va_list args;
	va_start(args,format);
	vsprintf(&buf[1],format,args);
	
	/// To the net.
	if(isConnected == true)
	{
		if(isServer == true)
		{
			if(rakServer->IsActive())
			{
				rakServer->Send(buf,(int)strlen(buf)+1,HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
				printf("[NETWORK_PRINTF_SENT] %s\n",&buf[1]);
			}
		}
		else
		{
			if(rakClient->IsActive())
			{
				rakClient->Send(buf,(int)strlen(buf)+1,HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
				printf("[NETWORK_PRINTF_SENT] %s\n",&buf[1]);
			}
		}
	}
	else
	{
		/// You cannot do
		printf("[MESSAGE] No network is provided. Cannot printout.\n");
	}

	va_end(args);
}

/// Timer callback.
void CALLBACK ClientTick(void*,BOOLEAN)
{
	//DWORD dwTick = GetTickCount();
	//printf("%5d\n",dwTick-g_dwLastTick);

	if(isConnected == true &&isServer == false && rakClient->GetSystemAddressFromIndex(0)!=RakNet::UNASSIGNED_SYSTEM_ADDRESS)
	{
		/// Send HEARTBEAT to a server.
		/// Client app.
		RakNet::BitStream bitStream;

		// When writing a timestamp, the first byte is ID_TIMESTAMP
		// The next 4 bytes is the timestamp itself.
		bitStream.Write((unsigned char)ID_TIMESTAMP);
		
		timeRak=RakNet::GetTime();
		bitStream.Write(timeRak);
		rakClient->Send(&bitStream, HIGH_PRIORITY, RELIABLE, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
		//printf("Sending message from client at time %i\n", time);

		PrintToNetwork("[%s] Worker Thread # : %d\n",rakClient->GetLocalIP(0),activeItems);
	}

	if(gotPong == false)
	{
		rakClient->Ping("255.255.255.255", PORT, true);
		printf("Pinging\n");
	}
}


int main(int argc,char** argv)
{
	if(argc >= 2)
	{
		if(argv[1][0] == 'c') /// Client
		{
			isServer = false;
		}

		if(argv[1][0] == 's') /// Server
		{
			isServer = true;
		}
	}
	else
	{
		printf("No arguments\n");
		exit(0);
	}

	/// Declare RakPeerInterface. Both for client and server.
	rakClient=RakNet::RakPeerInterface::GetInstance();
	rakServer=RakNet::RakPeerInterface::GetInstance();

	/// For heart-beat pinging process.
	rakClient->SetOccasionalPing(true);
	rakServer->SetOccasionalPing(true);

	char ch;
	char buff[256];
	bool b;

	printf("Application build date: %s %s\n", __DATE__, __TIME__ );

	if(isServer == false) /// Client
	{
		RakNet::SocketDescriptor socketDescriptor(PORT-1,0);
		socketDescriptor.socketFamily=AF_INET; // Only IPV4 supports broadcast on 255.255.255.255
		rakClient->Startup(1, &socketDescriptor, 1);
		rakClient->SetTimeoutTime(5000,RakNet::UNASSIGNED_SYSTEM_ADDRESS);
		printf("Client started, waiting for connections.\n");

#ifdef _PTGREY_
		if(InitializePtgreyCam() > 0)
		{
			printf("Camera is initialized!\n");
		}
		else
		{
			unsigned int retry = 50;
			while(--retry > 0)
			{
				printf("Camera initialization failed... please connect camera in 5secs.\nThen connection will be tried again. %d trial remaining.\n",retry);
				Sleep(5000);

				if(InitializePtgreyCam() > 0)
				{
					printf("Camera is initialized!\n");
					break;
				}
			}

			if(retry == 0)
			{
				// Incase failed
				exit(EXIT_FAILURE);
			}
		}
#endif

		capture.open(0);

		if (!capture.isOpened())
		{
			exit(EXIT_FAILURE);
		}
	}
	else if (isServer == true) /// Server case
	{
		// Run as a server.
		RakNet::SocketDescriptor socketDescriptor(PORT,0);
		socketDescriptor.socketFamily=AF_INET; // Only IPV4 supports broadcast on 255.255.255.255
		b = rakServer->Startup(32,&socketDescriptor, 1)==RakNet::RAKNET_STARTED;
		rakServer->SetMaximumIncomingConnections(32);
		rakServer->SetTimeoutTime(5000,RakNet::UNASSIGNED_SYSTEM_ADDRESS);

		isConnected = true;
			
		if (b)
			printf("Server started, waiting for connections.\n");
		else
		{ 
			printf("Server failed to start.  Terminating.\n");
			exit(EXIT_FAILURE);
		}
	}

	printf("Entering main loop.  Press 'q' to quit\n");

	/// To wait saving worker thread.
	hStorageThreadHandle = CreateEvent( NULL, TRUE, FALSE, NULL );

	/// Ping timer set.
	HANDLE hTimerPingThread, hTimerPacketReceiver;

	/// Only for client service.
	if(isServer == false)
		CreateTimerQueueTimer(&hTimerPingThread,NULL,ClientTick,NULL,5000,5000,0);

	/// Both client/server
	CreateTimerQueueTimer(&hTimerPacketReceiver,NULL,PacketReceiverThread,NULL,300,300,0);

	ch=0;

	while (isHalt != true)
	{
		/// non blocking io func.
		if (kbhit())
		{
			ch = getch();
		}

		if(isServer != true && isConnected == true  && rakClient->GetSystemAddressFromIndex(0)!=RakNet::UNASSIGNED_SYSTEM_ADDRESS)
		{
			capture >> frame;
			cv::imshow("sframe", frame);
			//cv::waitKey(20);

			if(isImageRequested == true)
			{
				isImageRequested = false;
				unsigned char* msg = new unsigned char[frame.rows*frame.cols*frame.channels() + 1];
				printf("%d\n",frame.rows*frame.cols*frame.channels() + 1);
				*(msg+0) = ID_IMAGE_BUFFER;
				memcpy(msg+1,frame.data,frame.rows*frame.cols*frame.channels());
				//rakClient->Send((const char*)msg,frame.rows*frame.cols*frame.channels() + 1,LOW_PRIORITY, RELIABLE_ORDERED_WITH_ACK_RECEIPT, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
				rakClient->Send((const char*)msg,frame.rows*frame.cols*frame.channels() + 1,LOW_PRIORITY, RELIABLE_ORDERED_WITH_ACK_RECEIPT, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);

				printf("%d\n",frame.type());
#if 0
				RemoteImageData rimage;
				rimage.pData = new char[frame.rows * frame.cols * frame.depth()];
				memcpy(rimage.pData,frame.data,frame.rows * frame.cols * frame.depth());
				rimage.cols = frame.cols;
				rimage.rows = frame.rows;
				rimage.type = frame.type();
				rimage.pSize = frame.rows * frame.cols * frame.depth();
#endif
				//printf("%d\n",strlen(rimage));
				// do image send here.
			}
		}

		if(ch=='q')
		{
			isHalt = true;
		}

		if(ch == 'x' && isServer == true)
		{
			StopCaptureTrigger();
		}

		if(ch == 'c' && isServer == true)
		{
			StartCaptureTrigger();
		}
		
		if(ch == 'v' && isServer == true)
		{
			ViewRemoteImage();
		}

		ch = 0;
		cvWaitKey(10);
	}

	/// Stop timer (for client)
	if(isServer == false)
		DeleteTimerQueueTimer(NULL,hTimerPingThread,NULL);

	DeleteTimerQueueTimer(NULL,hTimerPacketReceiver,NULL);

	printf("Wait for threads...\n");

	InterlockedDecrement( &activeItems );

	if ( activeItems != 0 )
    {
		printf("Waiting saving...\n");
        WaitForSingleObject( hStorageThreadHandle, INFINITE );
    }

	printf("quit. Press any key to exit...");

	// Shutdown stuff.  It's ok to call disconnect on the server if we are a client and vice-versa
	rakServer->Shutdown(0);
	rakClient->Shutdown(0);

	RakNet::RakPeerInterface::DestroyInstance(rakClient);
	RakNet::RakPeerInterface::DestroyInstance(rakServer);

	if(isServer == false)
	{
		Error error;

#ifdef _PTGREY_
		// Disconnect the camera
		error = cam.Disconnect();

		if (error != PGRERROR_OK)
		{
			PrintError( error );
		}
		else
		{
			printf("Camera release done.\n" );
		}
#endif
	}

	getch();

	return 1;
}

DWORD WINAPI DiskWriterThread(LPVOID lpParam)
{
	HyonImageData *imgData = (HyonImageData*)lpParam;

	//char fileNameBuf[0xff];

	//sprintf(fileNameBuf,"data\\image%04d.%s",imgData->seqNum,imageFileExtension);

	/// TODO : saving.
#ifdef __OPENCV_SPECIFIC__
	cvSaveImage(imgData->fName,imgData->imgStorage);
#endif
	//cv::imwrite(fileNameBuf,imgData->imgStorage);

	//printf("I'm Seq %04d. Active : %d/%d\n",imgData->seqNum,activeItems,frameNum);

	PNGOption  PNG_Save_Option;
	PNG_Save_Option.interlaced = false;
	PNG_Save_Option.compressionLevel = 0; // no compression.

	Error error = imgData->ptgreyImgStruct->Save(imgData->fName,&PNG_Save_Option);
	//Error error = imgData->ptgreyImgStruct->Save(imgData->fName);

	if (error != PGRERROR_OK)
	{
		error.PrintErrorTrace();
	}

	InterlockedDecrement( &activeItems );

	if(isHalt == true || bStopCapture == true)
	{
		printf("I'm Seq %04d. Active : %d\n",imgData->seqNum,activeItems);
	}

#ifdef __OPENCV_SPECIFIC__
	cvReleaseImage(&imgData->imgStorage);
#endif

	// Make sure NULL before free.
	//imgData->ptgreyImgStruct = NULL;
	free(imgData->ptgreyImgStruct);
	free(imgData);

	if ( activeItems == 0 && isHalt == true )
    {
		SetEvent( hStorageThreadHandle );
	}

	return 0;
}


/// Image grabbing callback.
void OnImageGrabbed(Image* pImage, const void* pCallbackData)
{
	HyonImageData *imgData;
	Error error;

	///////////////////////////////////
	/// TODO : ISSUE A STORAGING THREAD!
	imgData = (HyonImageData *)malloc(sizeof(HyonImageData));
	imgData->ptgreyImgStruct = new Image;
	
	error = imgData->ptgreyImgStruct->DeepCopy(pImage);

	imgData->seqNum = frameNum;
	sprintf(imgData->fName,"data\\%s_%05d.%s",fPrefix,frameNum,"jpg");

	if (error != PGRERROR_OK)
	{
		error.PrintErrorTrace();
	}

	/// Go ahead.
	InterlockedIncrement( &activeItems );
	BOOL ret = QueueUserWorkItem(DiskWriterThread,(PVOID)imgData,WT_EXECUTEONLYONCE);

	if(!ret)
	{
		PrintToNetwork("Error occurred during thread pooling... Check machine");
	}

	frameNum = frameNum + 1;

	return;
}

DWORD WINAPI CaptureThread(LPVOID lpParam)
{
	/// Assume here that, camera was initialized.
	Image image;
	IplImage *img;
	Error error;
	img = cvCreateImage(cvSize(640,480),IPL_DEPTH_8U,1);

	HyonImageData *imgData;

	/// TODO: prepare file name prefix.
	time(&rawtime);
	sprintf(fPrefix,"%d",rawtime);

	PrintToNetwork("NOTE this file identifer : %d",rawtime);

	frameNum = 0;
	bCaptureThreadDone = false;

	while(isHalt != true && bStopCapture != true)
	{
		//////////////////////////////////////////////
		// TODO : is this function, blocked function?
		// Grab image        
		error = cam.RetrieveBuffer( &image );
		
		if (error != PGRERROR_OK)
		{
			error.PrintErrorTrace();
			break;
		}

#ifdef __TEMP__
		Error error = image.Save(imgData->fName,ImageFileFormat::JPEG);

		if (error != PGRERROR_OK)
		{
			error.PrintErrorTrace();
		}
#endif

		///////////////////////////////////
		/// TODO : ISSUE A STORAGING THREAD!
		imgData = (HyonImageData *)malloc(sizeof(HyonImageData));
		imgData->ptgreyImgStruct = new Image;
		error = imgData->ptgreyImgStruct->DeepCopy(&image);
		imgData->seqNum = frameNum;
		sprintf(imgData->fName,"data\\%s_%05d.%s",fPrefix,frameNum,"jpg");

		if (error != PGRERROR_OK)
		{
			error.PrintErrorTrace();
			break;
		}

		/// Go ahead.
		InterlockedIncrement( &activeItems );
		//BOOL ret = QueueUserWorkItem(DiskWriterThread,(PVOID)imgData,WT_EXECUTELONGFUNCTION);
		BOOL ret = QueueUserWorkItem(DiskWriterThread,(PVOID)imgData,WT_EXECUTEONLYONCE);

		if(!ret)
		{
			PrintToNetwork("Error occurred during thread pooling... Check machine");
			/// TODO : Send a meassge to a server.
		}

		frameNum = frameNum + 1;

#if 0
		Error error = image.Save("data\\a.jpg",ImageFileFormat::JPEG);
		//Error error = imgData->ptgreyImgStruct->Save(imgData->fName);

		if (error != PGRERROR_OK)
		{
			error.PrintErrorTrace();
		}
#endif

#if __OPENCV_SPECIFIC__ // I remove this for speed reason.
		imgData->imgStorage = cvCreateImage(cvSize(640,480),IPL_DEPTH_8U,1);
#endif

#if __OPENCV_SPECIFIC__
		/// Should copy two
		memcpy(img->imageData,image.GetData(),image.GetDataSize()); /// Viewer buffer
		memcpy(imgData->imgStorage->imageData,image.GetData(),image.GetDataSize()); /// for worker thread.
#endif
	}

	//Release
	cvReleaseImage(&img);

	PrintToNetwork("Capture is done. Thread is killed");

	bCaptureThreadDone = true;

	return 0;
}

void CALLBACK PacketReceiverThread(void*,BOOLEAN)
{	
	/// Are these need to be called every time?
	/// Yes. in case server. But, not for the client.
	if(isServer == true)
	{
		/// in case Server app.
		packetFromServer=true;
		packet=rakServer->Receive();
	} 
	else /// in case Client app.
	{
		packetFromServer=false;
		packet=rakClient->Receive();
	}

	RakNet::TimeMS timeRak;

	if(packet)
	{
		unsigned char packetIdentifier = (unsigned char)packet->data[0];

		RakNet::BitStream timeBS(packet->data+1, sizeof(RakNet::Time), false);
		RakNet::BitStream bsIn(packet->data,packet->length,false);

		std::ostringstream sTime;
		std::string t;

		Error pgerror;

		IplImage *img;

		switch (packetIdentifier)
		{
			case ID_TIMESTAMP:
				timeBS.Read(timeRak);
				//printf("[%s] Time difference is %i\n",packet->systemAddress.ToString(), RakNet::GetTime() - time);
				
				time(&rawtime); sTime << ctime(&rawtime); t = sTime.str(); t = t.substr(0,t.length()-1); std::cout << "[" << t;
				printf("] %s sent ping\n",packet->systemAddress.ToString());
				break;
				
			case ID_UNCONNECTED_PONG:
				if(gotPong == false)
				{
					gotPong = true;

					bsIn.IgnoreBytes(1);
					bsIn.Read(timeRak);
					printf("Got pong from %s with time %i, Connecting...\n", packet->systemAddress.ToString(), RakNet::GetTimeMS() - timeRak);

					isConnected = rakClient->Connect(packet->systemAddress.ToString(), PORT, 0, 0) == RakNet::CONNECTION_ATTEMPT_STARTED; 

					if(isConnected == true)
					{
						printf("Connected!\n");
					}
					else
					{
						printf("Error\n");
					}
				}
				break;

			case ID_DISCONNECTION_NOTIFICATION:
				// Connection lost normally
				printf("ID_DISCONNECTION_NOTIFICATION from %s\n", packet->systemAddress.ToString(true));;
				break;


			case ID_NEW_INCOMING_CONNECTION:
				// Somebody connected.  We have their IP now
				printf("ID_NEW_INCOMING_CONNECTION from %s with GUID %s\n", packet->systemAddress.ToString(true), packet->guid.ToString());
				//clientID=packet->systemAddress; // Record the player ID of the client
				break;

			case ID_INCOMPATIBLE_PROTOCOL_VERSION:
				printf("ID_INCOMPATIBLE_PROTOCOL_VERSION\n");
				break;


			case ID_CONNECTION_LOST:
				// Couldn't deliver a reliable packet - i.e. the other system was abnormally
				// terminated
				printf("ID_CONNECTION_LOST from %s\n", packet->systemAddress.ToString(true));

				/// reset status.
				gotPong = false;
				break;

			case ID_START_CAPTURE:
				if(isCaptureStarted == false)
				{
					printf("Capture start triggered!\n");
					isCaptureStarted = true;
					bStopCapture = false;

					if(isServer != true)
					{
						pgerror = cam.StartCapture(OnImageGrabbed);

						if(pgerror != PGRERROR_OK)
						{
							PrintError(pgerror);
							PrintToNetwork("Error occurred during thread pooling...");
						}
						else
						{
							PrintToNetwork("Capture is started.");
							PrintToNetwork("NOTE this file identifer : %d",rawtime);
							
							// Time save.
							time(&rawtime);
							sprintf(fPrefix,"%d",rawtime);

							frameNum = 0;
						}
					}
				}
				break;

			case ID_STOP_CAPTURE:
				if(isCaptureStarted == true)
				{
					printf("Capture stop triggered!\n");
					isCaptureStarted = false;
					bStopCapture = true;

					pgerror = cam.StopCapture();

					if(pgerror != PGRERROR_OK)
					{
						PrintError(pgerror);
						PrintToNetwork("Error during cam stopping...");
					}
					else
					{
						PrintToNetwork("Camera stopped!");
					}
				}
				break;

			case ID_THIS_IS_CHAT:
				time(&rawtime); sTime << ctime(&rawtime); t = sTime.str(); t = t.substr(0,t.length()-1); std::cout << "[" << t;
				printf(",MESSAGE] : %s\n",&packet->data[1]);
				break;

			case ID_SEND_IMAGE:
				printf("Server request image\n");
				isImageRequested = true;
				break;

			case ID_IMAGE_BUFFER:
				printf("Image buffer ################");
				//img = new cv::Mat(640,480,16,packet->data[1]);
				img = cvCreateImage(cvSize(640,480),IPL_DEPTH_8U,3);
				img->imageData = (char*)(packet->data+1);
				//cv::imshow("test",img);
				cvShowImage("test",img);
				cvWaitKey(1);
				break;

			default:
				break;
		}
	}

	if (packet)
	{
		if (packetFromServer)
			rakServer->DeallocatePacket(packet);
		else
			rakClient->DeallocatePacket(packet);
	}
}


#if 0
void ErrorHandler(LPTSTR lpszFunction) 
{
	LPVOID lpMsgBuf;
    LPVOID lpDisplayBuf;
    DWORD dw = GetLastError(); 

    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | 
        FORMAT_MESSAGE_FROM_SYSTEM |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL,
        dw,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPTSTR) &lpMsgBuf,
        0, NULL );

	lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
        (lstrlen((LPCTSTR) lpMsgBuf) + lstrlen((LPCTSTR) lpszFunction) + 40) * sizeof(TCHAR)); 

	StringCchPrintf((LPTSTR)lpDisplayBuf, 
        LocalSize(lpDisplayBuf) / sizeof(TCHAR),
        TEXT("%s failed with error %d: %s"), 
        lpszFunction, dw, lpMsgBuf);

	MessageBox(NULL, (LPCTSTR) lpDisplayBuf, TEXT("Error"), MB_OK); 

	// Free error-handling buffer allocations.

    LocalFree(lpMsgBuf);
    LocalFree(lpDisplayBuf);
}
#endif