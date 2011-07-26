#ifndef __FEATURE_TRACK_H_
#define __FEATURE_TRACK_H_

#include <vector>

#include <opencv2/features2d/features2d.hpp>


#define	MAX_TRAIL	500

class CFeature2DTrack: public std::vector<cv::KeyPoint*>
{
private:
	int _frame;
	int _id;
	cv::Mat desc;	/// can be any descriptor
public:
	CFeature2DTrack()
	{
		reserve(MAX_TRAIL);
	};

	CFeature2DTrack(cv::KeyPoint* kpts,int frame,int id)
	{
		reserve(MAX_TRAIL);
		_id = id;
		_frame = frame;
		push_back(kpts);
	}

	~CFeature2DTrack()
	{
		for(int i=0;i<(int)size();i++)
			delete at(i);
	};
};

#endif