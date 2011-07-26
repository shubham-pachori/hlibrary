README

1. Introduction

This software is written for image capturing in the air using quadrotor with Ground Control Station (GCS).
Generally, UAV does not have any display device, so the client should send heartbeat to GCS, and GCS uses
that heartbeat for proof of live of UAV.

And server can send some useful command to client. So this software utilizes RakNet network socket library.
The library is included in this project, not the binary format, but sources.

2. Other dependencies.

OpenCV v2.2 is needed. The path of the library is hard-coded in property sheet. c:\OpenCV2.2
Pointgrey SDK is needed. 
 - C:\Program Files\Point Grey Research\FlyCapture2\lib
 - C:\Program Files\Point Grey Research\FlyCapture2\include