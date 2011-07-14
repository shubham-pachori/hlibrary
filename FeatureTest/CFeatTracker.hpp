#ifndef _CFEATTRACKER_HPP_
#define _CFEATTRACKER_HPP_

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

#define TRAIL 6
#define MAX_TRAIL 400

class CFeatTracker
{
public:
	CFeatTracker();
	~CFeatTracker();
	bool Track(cv::Mat &currentImage);
	void handleTrackedPoints(cv::Mat &output);

private:
	cv::Mat prevImage;	/// It is only needed storing prevImage. Because, current image will be provided.
	std::vector<cv::KeyPoint> prevKeyPoints;
	cv::Mat prevDescriptors;

	std::vector<cv::KeyPoint> currentKeyPoints;
	cv::Mat currentDescriptors;

	std::vector<cv::DMatch> matches;
	std::vector<std::vector<cv::DMatch>> matches2;

	void ExtractFeatAndDesc(cv::Mat &currentImage);
	void Match(void);
	void MyMatch(const cv::Mat& queryDescriptors, const cv::Mat& trainDescriptors,vector<cv::DMatch>& matches);
	double DistSquared(cv::Mat& k1, cv::Mat&k2);

	// Feature trail
	std::vector<cv::Point2f> featureTrails[MAX_TRAIL];

	/// FLANN matcher
	cv::Mat m_indices;
	cv::Mat m_dists;
};

#endif