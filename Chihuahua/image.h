#pragma once
#include <SDL.h> // Using SDL

class Image
{
public:
	Image();
	Image(const char* path, SDL_Renderer* renderer);
	Image(const char* path, SDL_Renderer* renderer, Uint8 r, Uint8 g, Uint8 b);
	void generateTexture();
	void close();
	void draw();
	void draw(SDL_Renderer* renderer, SDL_Rect dst, SDL_Rect src, SDL_Point center, double angle, SDL_RendererFlip flip, int alpha);

	int getWidth();
	int getHeight();
	double getAngle();
	int getAlpha();

	void setPath(const char* p);
	void setColorKey(SDL_Color c);
	void setRenderer(SDL_Renderer* r);
	void setSrcRegion(SDL_Rect s);
	void setDstRegion(SDL_Rect d);
	void setCenterAngle(SDL_Point c, double a);
	void setFlip(SDL_RendererFlip f);
	void setAlpha(int a);
	char* path;

private:
	
	SDL_Texture* texture;
	int width;
	int height;
	SDL_Color colorKey;
	SDL_Renderer* renderer;

	SDL_Rect srcRegion;
	SDL_Rect dstRegion;

	SDL_Point center;
	double angle;
	SDL_RendererFlip flip;
	int alpha;
};


