#include "CFeatTracker.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/video/tracking.hpp>

CFeatTracker::CFeatTracker()
{
}

CFeatTracker::~CFeatTracker()
{
}


void CFeatTracker::handleTrackedPoints(cv::Mat &output)
{
	unsigned int maxVal,i,j;

	if(!matches.empty())
	{
		maxVal = matches.size()<MAX_TRAIL?matches.size():MAX_TRAIL;
	}
	else
	{
		maxVal = m_indices.rows<MAX_TRAIL?m_indices.rows:MAX_TRAIL;
	}

	for(i=0;i<maxVal;i++)
	{
		//cv::line(output,prevKeyPoints[matches[i].trainIdx].pt,currentKeyPoints[matches[i].queryIdx].pt,cv::Scalar(255,0,0));
		//cv::circle(output,currentKeyPoints[matches[i].queryIdx].pt,3,cv::Scalar(255,255,255),-1);

		if(!matches.empty())
			featureTrails[i].push_back(currentKeyPoints[matches[i].queryIdx].pt);
		else
		{
			/// FLANN based matcher
			//printf("%d\n",m_indices.at<unsigned int>(i,0));
			featureTrails[i].push_back(prevKeyPoints[m_indices.at<unsigned int>(i,0)].pt);
		}
	}

	for(i=0;i<maxVal;i++)
	{
		for(j=0;j<featureTrails[i].size();j++)
		{
			cv::circle(output,featureTrails[i][j],1,cv::Scalar(25-j*10,150-j*10,250-10*j),1,1,0);
			//cv::circle(output,featureTrails[i][j],4,cv::Scalar(25-j*10,150-j*10,250-10*j),-1);
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

	return;
}

bool CFeatTracker::Track(cv::Mat &currentImage)
{
	ExtractFeatAndDesc(currentImage);

	if(prevImage.empty())
	{
		// make it past!
		//cv::swap(prevImage,currentImage);
		currentImage.copyTo(prevImage);
		currentDescriptors.copyTo(prevDescriptors);
		std::swap(prevKeyPoints,currentKeyPoints);
		return false;
	}

	// Do matching
	Match();
	//MyMatch(currentDescriptors,prevDescriptors,matches);

	handleTrackedPoints(currentImage);

	// make it past!
	cv::swap(prevImage,currentImage); /// In highgui, pastImage will be shown.
	cv::swap(prevDescriptors,currentDescriptors);
	std::swap(prevKeyPoints,currentKeyPoints);
	return true;
}

/// Extract interesting points and descriptors for current image.
void CFeatTracker::ExtractFeatAndDesc(cv::Mat &currentImage)
{
	/// Extract features to current*
	//cv::SurfFeatureDetector surf(2500.);
	//surf.detect(currentImage,currentKeyPoints);
	
	cv::FastFeatureDetector fast(60);
	fast.detect(currentImage,currentKeyPoints);

	//cv::GoodFeaturesToTrackDetector gftt(500,0.01,10);
	//gftt.detect(currentImage,currentKeyPoints);


	cv::SurfDescriptorExtractor surfDesc;
	surfDesc.compute(currentImage,currentKeyPoints,currentDescriptors);

	//cv::SiftDescriptorExtractor siftDesc;
	//siftDesc.compute(currentImage,currentKeyPoints,currentDescriptors);

	//cv::BriefDescriptorExtractor binDesc;
	//binDesc.compute(currentImage,currentKeyPoints,currentDescriptors);
}

void CFeatTracker::Match(void)
{
	//cv::BruteForceMatcher<cv::L2<float>> matcher;
	//cv::BruteForceMatcher<cv::HammingLUT> matcher;
	/// order : query                train
	//matcher.match(currentDescriptors,prevDescriptors,matches);
	//matcher.knnMatch(currentDescriptors,prevDescriptors,matches2,1);

	//cv::FlannBasedMatcher flannMatcher;
	//flannMatcher.match(currentDescriptors,prevDescriptors,matches);

	/// FLANN MY VERSION
	const int knn = 1;

	m_indices = cv::Mat(currentDescriptors.rows,knn,CV_32SC1);
	m_dists = cv::Mat(currentDescriptors.rows,knn,CV_32F);
	cv::flann::Index flann_index(prevDescriptors,cv::flann::KDTreeIndexParams(4));

	/// The output of m_indices means:
	///    row : pointer of currentDescriptors.
	///    content : pointer of previousDescriptors.
	flann_index.knnSearch(currentDescriptors,m_indices,m_dists,knn,cv::flann::SearchParams(32));

#if 0
	printf("Number of features  : %d\n",currentDescriptors.rows);

	for(unsigned int i=0;i<m_indices.rows;i++)
	{
		for(unsigned int j=0;j<m_indices.cols;j++)
		{
			printf("%d to %d\n",i,m_indices.at<unsigned int>(i,j));
		}
	}
#endif

	printf("Track %d/%d\n",m_indices.rows,prevDescriptors.rows);

	return;
}

/// Naive nearest-neighbor
void CFeatTracker::MyMatch(const cv::Mat& queryDescriptors, const cv::Mat& trainDescriptors,vector<cv::DMatch>& matches)
{
	double dsq, distsq1, distsq2;
	int minkey = -1;
	unsigned int i,j;

	/// clean match
	matches.clear();

	int k=0;

	for(i=0;i< (unsigned int)queryDescriptors.rows;i++)
	{
		/// reset
		distsq1 = 100000000.0;
		distsq2 = 100000000.0;

		cv::Mat curDesc = queryDescriptors.row(i);

		for(j=0;j< (unsigned int)trainDescriptors.rows;j++)
		{
			cv::Mat prevDesc = trainDescriptors.row(j);

			dsq = DistSquared(curDesc,prevDesc);

			if (dsq < distsq1) 
			{
				distsq2 = distsq1;
				distsq1 = dsq;
				minkey = j;
			}
			else if (dsq < distsq2)
			{
				distsq2 = dsq;
			}
		}

		if (2*distsq1 < distsq2)
		{
			/// Match allocation
			cv::DMatch currentMatch(i,minkey,DistSquared(curDesc,trainDescriptors.row(minkey)));
			matches.push_back(currentMatch);
			k++;
		}
		else
		{
			minkey = -1;
		}
	}

	printf("Total match : %d/%d\n",k,currentKeyPoints.size());
}

double CFeatTracker::DistSquared(cv::Mat& k1, cv::Mat&k2)
{
	cv::Mat diff = k1-k2;
	return diff.dot(diff);;
}