//-------------------------------------------------
//
// Hyon OpenGL Manager class.
//
// Description :
// History:
//    July 13th 2011. Started.
//-------------------------------------------------
#pragma once

#include <Windows.h>
#include <gl/GLU.h>

#include "HRenderer2D.hpp"

class CHGLManager
{
private:
	HINSTANCE	hInst;
	HWND		hWnd;
	HGLRC		hRC;
	HDC			hDC;

	CHRenderer2D* p_renderer;

	int winw,winh;

	bool bInit;
public:
	CHGLManager(HINSTANCE hInstance);
	~CHGLManager();
	void setHWindow(HWND hw);
	bool enableOpenGL(void);
	void display();
	void idle();
	void postRedisplay();
	void disableOpenGL();
	bool isInit();
	void setRenderer(CHRenderer2D* renderer);

	void SetWindowDimensions(int w,int h);
	int GetWindowWidth();
	int GetWindowHeight();
	void reshape(GLsizei w, GLsizei h);
};