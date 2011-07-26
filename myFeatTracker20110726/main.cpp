#include <iostream>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include "featureTable.h"

int main(void)
{
	cv::Mat frame;
	cv::Mat gray;

	cv::VideoCapture capture;
	CFeature2DTable featureTable;

	capture.open(0);

	if (!capture.isOpened())
    {
		exit(1);
	}

	for(;;)
	{
		capture >> frame;

		if (frame.empty())
            break;

		 cv::cvtColor(frame, gray, CV_RGB2GRAY);

		 //featureTable.Track(gray);

		 cv::imshow("frame", frame);
		 cv::waitKey(20);
		 
	}

	return 0;
}