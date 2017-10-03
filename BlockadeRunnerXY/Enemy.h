#pragma once
#include "GameObject.h"
class Enemy : public GameObject
{
	float rad;

public:
	//Defaults
	Enemy();
	//Explicit
	Enemy(bool Enabled, float Rad);

	point a;
	point enemyPos;



	virtual void update() override;
	virtual void draw() override;
};