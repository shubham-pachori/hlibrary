#include "matcher.h"

class RobustTrackerWrapper
{
private:
	RobustMatcher rmatcher;
	cv::Ptr<cv::FeatureDetector> pfd;
	std::vector<cv::DMatch> matches;
	std::vector<cv::KeyPoint> prevKpts, currKpts;
	cv::Mat		prevFrame;
	cv::Mat		fundemental;
	bool		isTracked;
public:
	RobustTrackerWrapper()
	{
		rmatcher.setConfidenceLevel(0.98);
		rmatcher.setMinDistanceToEpipolar(1.0);
		rmatcher.setRatio(0.65f);
		pfd= new cv::SurfFeatureDetector(10); 
		rmatcher.setFeatureDetector(pfd);

		isTracked =false;
	}

	bool Track(cv::Mat &currFrame)
	{
		if(prevFrame.empty())
		{
			//currFrame.copyTo(prevFrame);
			prevFrame = currFrame.clone();
			return false;
		}

		if(prevKpts.size()<100 && isTracked == true)
		{
			prevFrame.deallocate();
			currFrame.copyTo(prevFrame);
			return false;
		}

		/// if two images are ready.
		fundemental = rmatcher.match(currFrame,prevFrame,matches, currKpts, prevKpts);

		/// draw match on frame.
		// Convert keypoints into Point2f	
		std::vector<cv::Point2f> points1, points2;
	
		for (std::vector<cv::DMatch>::const_iterator it= matches.begin();
				 it!= matches.end(); ++it) {
				 float x= prevKpts[it->queryIdx].pt.x;
				 float y= prevKpts[it->queryIdx].pt.y;
				 points1.push_back(cv::Point2f(x,y));
				 cv::circle(prevFrame,cv::Point(x,y),1,cv::Scalar(0,0,255),2);
		}

		std::vector<cv::Point> matchPts[2];

		for (std::vector<cv::DMatch>::const_iterator it= matches.begin();
			 it!= matches.end(); ++it) {

			 // Get the position of left keypoints
			 float x= prevKpts[it->queryIdx].pt.x;
			 float y= prevKpts[it->queryIdx].pt.y;
			 points1.push_back(cv::Point2f(x,y));
			 matchPts[0].push_back(cv::Point(x,y));
			 //cv::circle(prevFrame,cv::Point(x,y),3,cv::Scalar(255,255,255),3);
			 // Get the position of right keypoints
			 x= currKpts[it->trainIdx].pt.x;
			 y= currKpts[it->trainIdx].pt.y;
			 cv::circle(currFrame,cv::Point(x,y),1,cv::Scalar(0,0,255),2);
			 points2.push_back(cv::Point2f(x,y));
			 matchPts[1].push_back(cv::Point(x,y));
		}

#if 0
		for(unsigned int i=0;i<matchPts[0].size();i++)
		{
			cv::line(currFrame,
				      matchPts[0][i],
					  matchPts[1][i],
					  cv::Scalar(0,0,255)
					  );
		}
#endif
		isTracked = true;

		//cv::swap(currFrame,prevFrame);
	}
};