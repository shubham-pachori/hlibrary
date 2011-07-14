#pragma once

#define TEXTURE_IMAGE_OFFSET 16

class CHRenderer2D
{
private:
	bool firstTime;
	GLuint texId;
public:
	CHRenderer2D();
	~CHRenderer2D();
	void UpdateTexture(unsigned char * buf, int w, int h);
	void display();
	void DrawSetup(float f, int ww, int wh);
};

void  DrawImage(int origw, int origh, int winw, int winh, float boxw, float boxh);
void getTextureDimensions(int w, int h, int& tw, int& th);
void CalculateBox(int frameWidth, int frameHeight, int& texw, int& texh, float& boxw, float& boxh);