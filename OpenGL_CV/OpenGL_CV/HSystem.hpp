#pragma once

#include <iostream>
#include <vector>

#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

using namespace std;


#define MAX_STRING_SIZE 1024



class CHSystem
{
private:
	std::vector <std::string>		imgSeqPath;
	unsigned int			frameCnt;
	unsigned int			maxFrameCnt;
	unsigned int			imgH,imgW;

public:
	cv::Mat					frameBuf;
	CHSystem();
	~CHSystem();
	bool ReadSequenceFromFolder(const wchar_t*);
	bool ReadNext(void);
};

std::string format_arg_list(const char *fmt, va_list args);
std::string format(const char *fmt, ...);