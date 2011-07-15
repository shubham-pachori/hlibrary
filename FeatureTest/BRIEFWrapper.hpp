#ifndef _BRIEFWRAPPER_HPP_
#define _BRIEFWRAPPER_HPP_

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

#include "BRIEF.h"

// Maximum number of keypoint matches allowed by the program
static const int MAXIMUM_NUMBER_OF_MATCHES = 5000;

// Minimum  scale ratio of  the program.  It indicates  that templates
// having scales  [0.5, 1]  of the original  template will be  used to
// generate new templates. Scales are determined in a logarithm base.
static const float SMALLEST_SCALE_CHANGE = 0.5;

// Number of different scales used to generate the templates.
static const int NUMBER_OF_SCALE_STEPS = 3;

// Number  of   different  rotation   angles  used  to   generate  the
// templates. 18 indicates that  [0 20 ... 340] degree-rotated samples
// will be stored in the 2-D array for each scale.
static const int NUMBER_OF_ROTATION_STEPS = 18;

class CBRIEFWrapper
{
private:
	// Brief object which contains methods describing keypoints with BRIEF
	// descriptors.
	CVLAB::BRIEF brief;

	// 2-D   array   storing  detected   keypoints   for  every   template
	// taken. Templates  are generated  rotating and scaling  the original
	// image   for   each  rotation   angle   and   scale  determined   by
	// NUMBER_OF_SCALE STEPS and NUMBER_OF_ROTATION_STEPS.
	vector<cv::KeyPoint> templateKpts[NUMBER_OF_SCALE_STEPS][NUMBER_OF_ROTATION_STEPS];

	// 2-D array  storing BRIEF descriptors  of corresponding templateKpts
	// elements
	vector< bitset<CVLAB::DESC_LEN> > templateDescs[NUMBER_OF_SCALE_STEPS][NUMBER_OF_ROTATION_STEPS];

	// 2-D array storing  the coordinates of the corners  of the generated
	// templates in original image coordinate system.
	CvMat templateObjectCorners[NUMBER_OF_SCALE_STEPS][NUMBER_OF_ROTATION_STEPS];

	// Data part of the templateObjectCorners
	double* templateObjectCornersData[NUMBER_OF_SCALE_STEPS][NUMBER_OF_ROTATION_STEPS];

	// The coordinates  of the keypoints  matching each other in  terms of
	// Hamming  Distance between  BRIEF descriptors  of  them.  match1Data
	// represents the  keypoint coordinates  of the matching  template and
	// match2Data  represents  the  matching  keypoints  detected  in  the
	// current frame. Elements with even indices contain x coordinates and
	// those  with odd  indices  contain y  coordinates  of the  keypoints
	// detected:
	double match1Data[2 * MAXIMUM_NUMBER_OF_MATCHES];
	double match2Data[2 * MAXIMUM_NUMBER_OF_MATCHES];

public:
	// Time elapsed:
	double keypointExtractTime; // by FAST detector
	double bitDescTime; // to describe all keypoints with BRIEF descriptor
	double matchTime; // to find the matches between 2 BRIEF descriptor vector
	double hmgEstTime; // to estimate the Homography matrix between 2 images
	double totalMatchTime; // to match the BRIEF descriptors of the incoming frame with all
	// the BRIEF descriptors stored

	unsigned int numKpts;

	// Detects the template object in the incoming frame
	void doDetection(cv::Mat &currImg)
	{
		// Variables for elapsed time estimations
		static int64 startTime, endTime;

		// Keypoints of the incoming frame
		vector<cv::KeyPoint> kpts;
  
		// BRIEF descriptors of kpts
		vector< bitset<CVLAB::DESC_LEN> > descs;

		startTime = cvGetTickCount();
		// Detect the FAST keypoints of the incoming frame
		//cv::extractKeypoints(kpts, fastThreshold, newFrameGray);
		
		cv::FastFeatureDetector detector;
		//cv::SurfFeatureDetector detector;
		//cv::GoodFeaturesToTrackDetector detector;

		/// ÀÓÇöÂ¯ ¤»¤»
		cv::Rect rect(CVLAB::IMAGE_PADDING_LEFT, CVLAB::IMAGE_PADDING_TOP,
		    CVLAB::SUBIMAGE_WIDTH(currImg.cols), CVLAB::SUBIMAGE_HEIGHT(currImg.rows));
 
		cv::Mat maskMat(currImg.rows,currImg.cols,CV_8U,cv::Scalar(0));
		cv::Mat maskMat2(CVLAB::SUBIMAGE_HEIGHT(currImg.rows),CVLAB::SUBIMAGE_WIDTH(currImg.cols),CV_8U,cv::Scalar(1));
		cv::Mat maskROI = maskMat(rect);
		cv::add(maskROI,maskMat2,maskROI);

		detector.detect(currImg,kpts,maskMat);
		endTime = cvGetTickCount();
		keypointExtractTime = endTime - startTime;

		numKpts = kpts.size();

		startTime = cvGetTickCount();
		// Describe the keypoints with BRIEF descriptors
		IplImage* cImg = new IplImage(currImg);
		brief.getBriefDescriptors(descs, kpts, cImg);
		endTime = cvGetTickCount();
		bitDescTime = endTime - startTime;
	}
};

#endif