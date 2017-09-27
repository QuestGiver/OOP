#pragma once
#include "GameObject.h"
class Player : public GameObject
{
public:
	//Defaults
	Player();
	//Explicit
	Player(bool Enabled, int HP, int Atk);

	point a;
	point mouse;

	int Health;
	int Defence;
	int Attack;

	virtual void update() override;
	virtual void draw() override;
};