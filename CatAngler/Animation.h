#pragma once
#ifndef ANIMATION_H
#define ANIMATION_H

#include <SDL.h>
#include <string>

class Animation
{
	public:
		Animation(){}

		void update();
		void draw(float x, float y, int spriteWidth, int spriteHeight);
		void setProps(std::string textureID, int spriteRow, int frame, int animSpeed, SDL_RendererFlip flip = SDL_FLIP_NONE);

	private:
		int m_SpriteRow, m_SpriteFrame, m_AnimSpeed, m_FrameCount;
		std::string m_TextureID;
		SDL_RendererFlip m_Flip;
};


#endif