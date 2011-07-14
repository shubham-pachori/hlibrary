#ifndef _CPARAMETERS_HPP_
#define _CPARAMETERS_HPP_

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <windows.h>
#include "CTracker.hpp"
#include "CFeatTracker.hpp"

class CParameters
{
public:
	std::vector <std::string>		imgSeqPath;
	unsigned int			frameCnt;
	unsigned int			maxFrameCnt;
	cv::Mat					frameBuf;

	unsigned int			imgH,imgW;

	CTracker					tracker;
	CFeatTracker				tracker2;

	///Ctor, dtor
	CParameters();
	~CParameters();

	bool ReadSequenceFromFolder(const char *dataDir);
	std::string format(const char *fmt, ...);

private:
	std::string format_arg_list(const char *fmt, va_list args);
};

#endif