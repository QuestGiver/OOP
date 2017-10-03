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

	point a;
	point playerPos;



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