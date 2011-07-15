/// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>

/// Standard I/O
#include <iostream>
#include <string>

/// Class
#include "CParameters.hpp"
#include  "RobustTrackerWrapper.hpp"
#include "CMyTracker1.hpp"

/// Brief tester
#include "BRIEFWrapper.hpp"

#define DEBUG_1	
#undef	DEBUG_1

/// Global class. Manage all data through this software.
CParameters* g;

int main(int argc,char* argv[])
{
	g = new CParameters();
	CMyTracker1 trackerTest;

	RobustTrackerWrapper rTracker;
	CBRIEFWrapper briefTester;

	if(argc == 2)
	{
		if(g->ReadSequenceFromFolder(argv[1]) != true)
		{
			return -1;
		}
	}
	else
	{
		printf("[USAGE] %s [input folder] (optional) ...\n",argv[0]);
		return -1;
	}

	while(1)
	{
		g->frameBuf = cv::imread(g->imgSeqPath[g->frameCnt],0);
		
#if 0
		/// pixel based optical flow
		if(g->tracker.Track(g->frameBuf) != true)
		{
			/// first run.
			continue;
		}
#endif
#if 0
		/// shit...
		if(g->tracker2.Track(g->frameBuf) != true)
		{
			continue;
		}
#endif
#if 0
		if(rTracker.Track(g->frameBuf) != true)
		{
			continue;
		}
#endif
#if 0
		if(trackerTest.Track(g->frameBuf) != true)
		{
			continue;
		}
#endif
		briefTester.doDetection(g->frameBuf);
		printf("%f, %f, %4d\n",briefTester.keypointExtractTime/(cvGetTickFrequency()*1000.),briefTester.bitDescTime/(cvGetTickFrequency()*1000.),briefTester.numKpts);

		cv::imshow("Sequences",g->frameBuf);
		cv::waitKey(1);
		g->frameCnt++;

		if(g->frameCnt >= g->maxFrameCnt)
		{
			break;
		}
	}


	getchar();

	return 0;
}