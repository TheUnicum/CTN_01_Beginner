#pragma once

#include "Graphics.h"

class Dude
{
public:
	void Draw(Graphics& gfx) const;
	void ClampToScreen();
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
};