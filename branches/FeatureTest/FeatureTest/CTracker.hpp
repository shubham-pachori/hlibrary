#ifndef _CTRACKER_HPP_
#define _CTRACKER_HPP_

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

#define TRAIL 10
#define MAX_TRAIL 400

class CTracker
{
public:
	//cv::Mat currentImg;
	cv::Mat previosImg;
	//cv::Mat output;

	std::vector<cv::Point2f> points[2];
	std::vector<cv::Point2f> initial;
	std::vector<cv::Point2f> features;
	std::vector<uchar> trackStatus;
	std::vector<float> trackErr;
	std::vector<cv::KeyPoint> keyPoints;

	cv::Mat descriptors;	/// feature descriptors. e.g., SURF,SIFT

	CTracker();
	~CTracker();

	bool addNewPoints(void);
	bool acceptTrackedPoint(int i);
	void detectFeaturePoints(cv::Mat& currentImage);
	bool Track(cv::Mat& currentImage);
	void handleTrackedPoints(cv::Mat &output);
private:
	std::vector<cv::Point2f> featureTrails[MAX_TRAIL];
	void handleTrackedPoints2(cv::Mat &output);
};

#endif