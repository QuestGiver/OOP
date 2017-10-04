#pragma once
#include "GameObject.h"
class Enemy : public GameObject
{


public:
	//Defaults
	Enemy();
	//Explicit
	Enemy(bool Enabled, float Rad);
	float rad;

	point enemyPos;

	point velocity( point player, float Speed);

	virtual void update() override;
	virtual void draw() override;
};