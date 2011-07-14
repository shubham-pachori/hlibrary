#include "CParameters.hpp"

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <windows.h>

#define MAX_STRING_SIZE 1024

CParameters::CParameters(void)
{
	frameCnt = 0;
	imgH = imgW = 0;
}

CParameters::~CParameters()
{
}



bool CParameters::ReadSequenceFromFolder(const char *dataDir)
{
	WIN32_FIND_DATA FileData;
	HANDLE hSearch;

	char newPath[MAX_STRING_SIZE];
	std::string fullPath;

	bool fFinished = false;

	sprintf(newPath,"%s/*.jpg",dataDir);

	hSearch = FindFirstFile(newPath,&FileData);

	if(hSearch == NULL)
	{
		printf("I can't find any files from specified folder\n");
		return false;
	}
	else
	{
		printf("Reading["); printf(newPath); printf("]\n");
	}

	fullPath = format("%s/%s",dataDir,FileData.cFileName);

	/// Get width,height of images
	cv::Mat tmpImg = cv::imread(fullPath);

	this->imgH = tmpImg.rows;
	this->imgW = tmpImg.cols;

#ifdef DEBUG_1
	std::cout << fullPath << std::endl;
#endif

	this->imgSeqPath.push_back(fullPath);

	while(FindNextFile(hSearch,&FileData))
	{
		//sprintf(fullPath,"%s/%s",dataDir,FileData.cFileName);
		fullPath = format("%s/%s",dataDir,FileData.cFileName);
#ifdef DEBUG_1
		//printf("%s\n",fullPath);
		std::cout << fullPath << std::endl;
#endif
		this->imgSeqPath.push_back(fullPath);
	}

	printf("%d images in sequence ...\n", this->imgSeqPath.size() ); 
	fflush(stdout);

	this->maxFrameCnt = this->imgSeqPath.size();

	return true;
}

std::string CParameters::format_arg_list(const char *fmt, va_list args)
{    
	if (!fmt) 
		return "";    
	int   result = -1, length = 256;    
	char *buffer = 0;    
	
	while (result == -1)    
	{        
		if (buffer) 
			delete [] buffer;       
		buffer = new char [length + 1];        
		memset(buffer, 0, length + 1);        
		result = _vsnprintf(buffer, length, fmt, args);       
		length *= 2;   
	}   
	
	std::string s(buffer);   
	delete [] buffer;   
	return s;

}

std::string CParameters::format(const char *fmt, ...)
{    
	va_list args;    
	va_start(args, fmt);   
	std::string s = format_arg_list(fmt, args);
	va_end(args); 
	return s;
}