#pragma once
#include "GameObject.h";
class Collision
{
	//Defaults
	//Player();
	//Explicit
	//Player(bool Enabled, int HP, int Atk);
	Collision(); 

	float d;
	bool isColliding(point a, point b, float R1, float R2);

public:

	//collision(point a, point b, float R1, float R2);
};