#include "CTracker.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/video/tracking.hpp>

CTracker::CTracker()
{
}

CTracker::~CTracker()
{
}

bool CTracker::addNewPoints(void)
{
	/// Minimum track : 10
	return points[0].size() <= 100;
}

bool CTracker::acceptTrackedPoint(int i)
{
	//return trackStatus[i] && (abs(points[0][i].x-points[1][i].x)+(abs(points[0][i].y-points[1][i].y))>2);
	return trackStatus[i];
}

void CTracker::detectFeaturePoints(cv::Mat& currentImage)
{
	/// EXAMPLES of other extractors.
	cv::GoodFeaturesToTrackDetector gftt(500,0.01,10);
	gftt.detect(currentImage,keyPoints);

	/// FAST
	//cv::FastFeatureDetector fast;
	//fast.detect(currentImage,keyPoints);

	/// SURF
	/// Detect interesting points.
	//cv::SurfFeatureDetector surf(2500.);
	//surf.detect(currentImage,keyPoints);

#if 0
	/// Extract feature descriptors.
	cv::Mat _descriptors;
	cv::SurfDescriptorExtractor surfDesc;
	surfDesc.compute(currentImg,keyPoints,_descriptors);
#endif 

	std::vector<cv::Point2f> _points;
	std::vector<cv::Point2f> _initial;

	for(unsigned int i=0;i<keyPoints.size();i++)
	{
		_points.push_back(keyPoints[i].pt);
		_initial.push_back(keyPoints[i].pt);
	}

	/// Attach extracted corners.
	points[0].insert(points[0].end(),_points.begin(),_points.end());
	initial.insert(initial.end(),_initial.begin(),_initial.end());

#if 0
	/// Concaternate extracted descriptors.
	if(descriptors.empty())
	{
		/// Initial copy.
		_descriptors.copyTo(descriptors);
	}
	else
	{
		///---------------------------------
		/// CONCATERNATION
		/// Get the size of new descriptors.
		///---------------------------------
		int newCol = descriptors.cols;
		int newRow = descriptors.rows+_descriptors.rows;

		cv::Mat newDescriptors = cv::Mat(newRow,newCol,descriptors.type());
		
		newDescriptors.rowRange(cv::Range(0,descriptors.rows)) = descriptors;
		newDescriptors.rowRange(cv::Range(descriptors.rows+1,newRow)) = _descriptors;

		newDescriptors.copyTo(descriptors);
	}
#endif
	return;
}

bool CTracker::Track(cv::Mat& currentImage)
{
	if(previosImg.empty())
	{
		currentImage.copyTo(previosImg);
		return false;
	}

	if(addNewPoints())
	{
		detectFeaturePoints(currentImage);
	}

	cv::calcOpticalFlowPyrLK(previosImg,currentImage,points[0],points[1],trackStatus,trackErr,cv::Size(15,15),3,cv::TermCriteria(cv::TermCriteria::COUNT | cv::TermCriteria::EPS, 20, 0.01));

	//cv::Mat _trackedDescriptors;
	//cv::SurfDescriptorExtractor surfDesc;
	//surfDesc.compute(currentImg,keyPoints,_trackedDescriptors);

	int k=0;


	for(unsigned int i=0;i<points[1].size();i++)
	{
		if(acceptTrackedPoint(i))
		{
			initial[k] = initial[i];
			points[1][k++] = points[1][i];
		}
	}

	points[1].resize(k);
	initial.resize(k);

#if 0
	cv::Mat trackedDescriptors = cv::Mat(k,descriptors.cols,descriptors.type());

	/// Select good features.
	for(unsigned int i=0;i<successList.size();i++)
	{
		trackedDescriptors.row(i) = descriptors.row(successList[i]).clone();
	}
#endif
	//handleTrackedPoints(output);
	handleTrackedPoints2(currentImage);

	std::swap(points[1],points[0]);
	//cv::swap(previosImg,currentImage);
	currentImage.copyTo(previosImg);

	return true;
}

void CTracker::handleTrackedPoints(cv::Mat &output)
{
	for(unsigned int i=0;i<points[1].size();i++)
	{
		cv::line(output,initial[i],points[1][i],cv::Scalar(255,0,0));
		cv::circle(output,points[1][i],3,cv::Scalar(255,255,255),-1);
	}
}

void CTracker::handleTrackedPoints2(cv::Mat &output)
{
	unsigned int i,j;

	unsigned int maxVal = points[1].size()<MAX_TRAIL?points[1].size():MAX_TRAIL;

	for(i=0;i<maxVal;i++)
	{
		featureTrails[i].push_back(points[1][i]);
	}


	for(i=0;i<maxVal;i++)
	{
		for(j=1;j<featureTrails[i].size();j++)
		{
			cv::circle(output,featureTrails[i][j],1,cv::Scalar(25-j*10,150-j*10,250-10*j),1,1,0);
			//cv::line(output,featureTrails[i][j],featureTrails[i][j-1],cv::Scalar(255,0,0));
		}

		cv::circle(output,featureTrails[i][j-1],3,cv::Scalar(0,0,255),1,8,0);

		if(featureTrails[i].size() > TRAIL)
		{
			featureTrails[i].erase(featureTrails[i].begin());
		}
	}

	for(i=maxVal;i<MAX_TRAIL;i++)
	{
		if(!featureTrails[i].empty())
		featureTrails[i].erase(featureTrails[i].begin());
	}

	//for(i=0;i<10;i++)
	//printf("%d\n",featureTrails[i].size());

	return;
}