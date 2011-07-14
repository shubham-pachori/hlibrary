#ifndef _CMYTRACKER1_HPP_
#define _CMYTRACKER1_HPP_

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

class CMyTracker1
{
private:
	vector<cv::KeyPoint> prevKpts;
	vector<cv::KeyPoint> currKpts;
	cv::Mat					prevDesc;
	cv::Mat					currDesc;
public:
	CMyTracker1();
	~CMyTracker1();

	bool Track(cv::Mat &currentImage);
};

#endif