#ifndef __FEATURE_TABLE_H_
#define __FEATURE_TABLE_H_

#include <vector>
#include <opencv2/features2d/features2d.hpp>

#include "featureTrack.h"

#define MAX_FEATURES 500
#define MIN_FEATURES 50
#define DESIRED_FTRS 500

class CFeature2DTable : public std::vector<CFeature2DTrack*>
{
private:
	int _frame;
	int _id;
	int _numFeatures;		/// 현재 유지되는 피쳐의 갯수.
public:
	CFeature2DTable()
	{
		reserve(MAX_FEATURES);
		_id = 0;
		_numFeatures = 0;
		_frame = 0;
	}

	void Add(cv::KeyPoint* kpts,int frame)
	{
		CFeature2DTrack *pTrack = new CFeature2DTrack(kpts,frame,_id++);
		push_back(pTrack);
		_numFeatures++;
	}

	bool Trackable()
	{
		return (_numFeatures > MIN_FEATURES);
	}

	void Track(cv::Mat& image)
	{
		std::vector<cv::KeyPoint> ipts;
		cv::GridAdaptedFeatureDetector detector(new cv::FastFeatureDetector(10, true), DESIRED_FTRS, 4, 4);

		/// FAST
		detector.detect(image,ipts);

		if(Trackable())
		{
			/// do tracking
		}
		else
		{
			/// do point registering
			for(int i=0;i<ipts.size();i++)
			{
				cv::KeyPoint* kpts = new cv::KeyPoint(ipts[i]);
				Add(kpts,_frame);
			}
		}

		_frame++;
	}
};

#endif