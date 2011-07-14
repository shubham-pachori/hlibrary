#include "CMyTracker1.hpp"

#include <string>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

#define MIN_FEATURES 50

CMyTracker1::CMyTracker1()
{
}

CMyTracker1::~CMyTracker1()
{
}

bool CMyTracker1::Track(cv::Mat &currImg)
{
	cv::FastFeatureDetector detector(50);
	cv::BriefDescriptorExtractor extractor(32); //this is really 32 x 8 matches since they are binary matches packed into bytes

	/// TODO : 전부 리셋하기 보다는 이전거를 보존해야 할 듯.
	if(prevKpts.empty() || prevKpts.size() <= MIN_FEATURES)
	{
		detector.detect(currImg,currKpts);
		extractor.compute(currImg,currKpts,currDesc);
		std::swap(currKpts,prevKpts);
		cv::swap(currDesc,prevDesc);

		/// 이 시점에서 모든 kpts와 desc는 prev로 이전되었다.
		return false;
	}

	/// 여기에서는 tracking만 하자.
	/// 우리가 갖고있는것은 desc와 kpts.
	/// kpts 근방 W 만큼 탐색을 하고 binary desc를 추출하고 score를 매긴다.
	/// imageROI = image(cv::Rect(385,270,width,height)); 로 roi를 설정 할 수 있구만.
	/// Kpts 를 iterator로 돌면서. 그 근방 W만큼 patch ROI 를 설정하고. bindesc를 뽑아서 비교하고 제일 우선순위를 매긴다.
}