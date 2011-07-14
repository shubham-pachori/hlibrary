#include "stdafx.h"
#include "HGLManager.hpp"

#include <iostream>

using namespace std;

CHGLManager::CHGLManager(HINSTANCE hInstance)
{
	hInst = hInstance;
	bInit = false;
}

CHGLManager::~CHGLManager()
{
}

void CHGLManager::setHWindow(HWND hw)
{
	hWnd = hw;
}

void CHGLManager::display()
{
	if(p_renderer != NULL)
		p_renderer->display();

	SwapBuffers(hDC);
}

void CHGLManager::postRedisplay()
{
	if(bInit == true)
		display();
}

void CHGLManager::SetWindowDimensions(int w,int h)
{
    winw = w;
    winh = h;
}


int  CHGLManager::GetWindowWidth()
{
    return winw;
}

void CHGLManager::reshape(GLsizei w, GLsizei h)
{
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT,GL_NICEST);

    SetWindowDimensions(w,h);
    //printf("Window Size::[%d x %d]\n",w,h);
	//{
	//	if (rd2!=NULL)
	//		rd2->reshape(w,h);
	//}
}


int  CHGLManager::GetWindowHeight()
{
    return winh;
}

void CHGLManager::idle()
{
	Sleep (1);	/// Context change.
	postRedisplay();
}

void CHGLManager::disableOpenGL(void)
{
	wglMakeCurrent( NULL, NULL );
	wglDeleteContext( hRC );
	ReleaseDC( hWnd, hDC );
}

void CHGLManager::setRenderer(CHRenderer2D* renderer)
{
	p_renderer = renderer;
}

bool CHGLManager::enableOpenGL(void)
{
	int pixelFormat;
	PIXELFORMATDESCRIPTOR pfd;

	hDC = GetDC(hWnd);

	if(hDC == NULL)
	{
		cout << "Get DC failed" << endl;
		return false;
	}

	ZeroMemory(&pfd,sizeof(pfd));

	pfd.nSize = sizeof(pfd);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 24;
	pfd.cDepthBits = 16;
	pfd.iLayerType = PFD_MAIN_PLANE;
	pixelFormat = ChoosePixelFormat(hDC,&pfd);
	SetPixelFormat(hDC,pixelFormat,&pfd);

	hRC = wglCreateContext(hDC);
	wglMakeCurrent(hDC,hRC);

	bInit = true;

	return true;
}

bool CHGLManager::isInit()
{
	return bInit;
}