#pragma once
#include "GameObject.h"
class Player : public GameObject
{
	float rad;
public:
	//Defaults
	Player();
	//Explicit
	Player(bool Enabled, float rad);
	//determines time between shots
	float ROFtimer;
	//determines time that has passed between shots
	float timePassed;
	point playerPos;
	bool mouseDown;


	virtual void update() override;
	virtual void draw() override;
};

class Mouse : public GameObject
{
	float rad;
public:
	//Defaults
	Mouse();
	//Explicit
	Mouse(bool Enabled, float Rad);

	point a;
	point mouse;

	virtual void update() override;
	virtual void draw() override;
};