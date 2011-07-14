#include "stdafx.h"
#include "glext.h"
#include <gl/glu.h>
#include "HRenderer2D.hpp"
#include "HGLManager.hpp"
#include "HSystem.hpp"

extern CHGLManager *p_hglmgr;
extern CHSystem *p_system;

CHRenderer2D::CHRenderer2D()
{
}

CHRenderer2D::~CHRenderer2D()
{
}

void CHRenderer2D::UpdateTexture(unsigned char * buf, int w, int h)
{
	float BorderColor[4] = {0.0,0.0,0.0,0.0};

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D,0);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, w, h, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE, (GLvoid*)buf);
	glPixelStorei(GL_UNPACK_ALIGNMENT,1);
	glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
	glTexParameterfv(GL_TEXTURE_2D,GL_TEXTURE_BORDER_COLOR,BorderColor);
	glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP_TO_BORDER);
	glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP_TO_BORDER);
	return;
}

void CHRenderer2D::DrawSetup(float f, int ww, int wh)
{ 
	glClearColor(f, 0.0f, 0.0f, 1.0f);
	glClear( GL_COLOR_BUFFER_BIT);
    glViewport(0,0,ww,wh);
    glDisable(GL_DEPTH_TEST);  
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1,0,1);
    glMatrixMode(GL_MODELVIEW);	
    glLoadIdentity();
	return;
}

void CHRenderer2D::display()
{
	if(p_hglmgr == NULL)
		return;

	if(!p_hglmgr->isInit())
	{
		return;
	}

	if (firstTime)
	{
		glGenTextures(1, &texId);
		firstTime = false;
		return;
	}

	// Update Texture
	if(p_system == NULL)
		return;

	/// READ!
	p_system->ReadNext();

	int iw = p_system->frameBuf.cols;
	int ih = p_system->frameBuf.rows;
	int ww = p_hglmgr->GetWindowWidth();
	int wh = p_hglmgr->GetWindowHeight();

	float boxw;
	float boxh;

	UpdateTexture(p_system->frameBuf.data,iw,ih);
	DrawSetup(0.0, ww,wh);
	CalculateBox(iw, ih, iw, ih, boxw, boxh);
	DrawImage(p_system->frameBuf.cols, p_system->frameBuf.rows, ww, wh, boxw, boxh);

	return;
}

void  DrawImage(int origw, int origh, int winw, int winh, float boxw, float boxh)
{
	int    texw, texh;
	double xfrac, yfrac;
	
	GLuint texId = 0;
	glColor3d(1,1,1);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texId);
	
    getTextureDimensions(origw,origh,texw,texh);
	xfrac = double(origw)/double(texw);
	yfrac = double(origh)/double(texh);
	glBegin(GL_QUADS);
	glTexCoord2d(    0,     0); glVertex2f( 0.0f,  boxh);
	glTexCoord2d(xfrac,     0); glVertex2f( boxw,  boxh);
	glTexCoord2d(xfrac, yfrac); glVertex2f( boxw,  0.0f);
	glTexCoord2d(    0, yfrac); glVertex2f( 0.0f,  0.0f);
	glEnd();
	glDisable(GL_TEXTURE_2D);
}

void getTextureDimensions(int w, int h, int& tw, int& th)
{
    int offset = TEXTURE_IMAGE_OFFSET;
    if (w % offset == 0)
        tw = w;
    else
        tw = offset + w - (w % offset);
    if (h % offset == 0)
        th = h;
    else
        th = offset + h - (h % offset);
    return;
}

void CalculateBox(int frameWidth, int frameHeight, int& texw, int& texh, float& boxw, float& boxh)
{
	int ww, wh;
	float magw, magh;
    int w  = frameWidth;
    int h  = frameHeight;
    ww     = p_hglmgr->GetWindowWidth();
    wh     = p_hglmgr->GetWindowHeight();
    magw   = float(ww)/float(w);
    magh   = float(wh)/float(h);
	if (magw < magh)
    {
        boxw = 1.0;
        boxh = magw/magh;
    }
    else
	{
		boxw = magh/magw;
		boxh = 1.0;
	}
	return;
}