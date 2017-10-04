#pragma once
#include"GameObject.h"
class Projectile : public GameObject
{


	float vert;
public:
	//Defaults
	Projectile();
	//Explicit
	Projectile(bool Enabled, float Radius, float Speed, point player, point mouse);

	float speed;
	point velocity(point player, point mouse, float Speed);
	float rad;
	point vel;

	bool growth;
	bool change;
	float timeSpan;	// time it's been alive
	float lifeSpan; // limit to the time it can alive




	virtual void update() override;
	virtual void draw() override;
};