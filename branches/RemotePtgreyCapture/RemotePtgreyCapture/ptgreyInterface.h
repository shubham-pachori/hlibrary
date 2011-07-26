#ifndef _PTGREYINTERFACE_H_
#define _PTGREYINTERFACE_H_

#include <FlyCapture2.h>

using namespace FlyCapture2;

void PrintBuildInfo();
void PrintCameraInfo( CameraInfo* pCamInfo );
void PrintError( Error error );
int InitializePtgreyCam(void);

#endif