#pragma once
#include"GameObject.h"
class Projectile : public GameObject
{

	float rad;

public:
	//Defaults
	Projectile();
	//Explicit
	Projectile(bool Enabled, float Radius);

	point a;
	point mouse;


	virtual void update() override;
	virtual void draw() override;
};