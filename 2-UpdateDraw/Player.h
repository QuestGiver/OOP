#pragma once

class Player
{

private:


public:
	//player position x
	float x;
	//player position y
	float y;

	bool weaponActive;

	void update();
	void draw();
};


