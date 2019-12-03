#pragma once

class Poo
{
public:
	void Update();
	void ProcessConsumprion(int dudex, int dudey, int dudewidth, int dudeheight);
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
};
