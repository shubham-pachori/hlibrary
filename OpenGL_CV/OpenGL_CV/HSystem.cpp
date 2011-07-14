#include "stdafx.h"
#include "HSystem.hpp"

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <windows.h>

#include <sstream>


CHSystem::CHSystem()
{
	frameCnt=0;
}

CHSystem::~CHSystem()
{
}
bool CHSystem::ReadNext()
{
	if(frameCnt >= maxFrameCnt)
	{
		frameCnt = 0;
		return false;
	}

	frameBuf = cv::imread(imgSeqPath[frameCnt++],0);

	return true;
}

bool CHSystem::ReadSequenceFromFolder(const wchar_t *dataDir)
{
	WIN32_FIND_DATA FileData;
	HANDLE hSearch;

	wchar_t newPath[MAX_STRING_SIZE];
	std::string fullPath;

	bool fFinished = false;

	wsprintf(newPath,L"%s/*.jpg",dataDir);

	hSearch = FindFirstFile(newPath,&FileData);

	if(hSearch == NULL)
	{
		printf("I can't find any files from specified folder\n");
		return false;
	}
	else
	{
		printf("Reading["); wprintf(newPath); printf("]\n");
	}

	wsprintf(newPath,L"%s/%s",dataDir,FileData.cFileName);
	
	// Convert to a char*
    size_t origsize = wcslen(newPath) + 1;
    const size_t newsize = 1024;
    size_t convertedChars = 0;
    char nstring[newsize];
    wcstombs_s(&convertedChars, nstring, origsize, newPath, _TRUNCATE);

	fullPath.assign(nstring);

	/// Get width,height of images
	cv::Mat tmpImg = cv::imread(fullPath);

	imgH = tmpImg.rows;
	imgW = tmpImg.cols;

#ifdef DEBUG_1
	std::cout << fullPath << std::endl;
#endif

	this->imgSeqPath.push_back(fullPath);

	while(FindNextFile(hSearch,&FileData))
	{
		//sprintf(fullPath,"%s/%s",dataDir,FileData.cFileName);
		//fullPath = format("%s/%s",dataDir,FileData.cFileName);
		wsprintf(newPath,L"%s/%s",dataDir,FileData.cFileName);
		
		// Convert to a char*
		size_t origsize = wcslen(newPath) + 1;
		const size_t newsize = 1024;
		size_t convertedChars = 0;
		char nstring[newsize];
		wcstombs_s(&convertedChars, nstring, origsize, newPath, _TRUNCATE);

		fullPath.assign(nstring);
#ifdef DEBUG_1
		//printf("%s\n",fullPath);
		std::cout << fullPath << std::endl;
#endif
		this->imgSeqPath.push_back(fullPath);
	}

	printf("%d images in sequence ...\n", imgSeqPath.size() ); 
	fflush(stdout);


	maxFrameCnt = imgSeqPath.size();

	return true;
}

std::string format_arg_list(const char *fmt, va_list args)
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

std::string format(const char *fmt, ...)
{    
	va_list args;    
	va_start(args, fmt);   
	std::string s = format_arg_list(fmt, args);
	va_end(args); 
	return s;
}