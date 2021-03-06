#pragma once
#include<string>

struct point
{
	float x;
	float y;
};

class GameObject
{
public:
	//std::string name;

	bool enabled;

	point a;

	virtual void update() = 0;
	virtual void draw() = 0;


};
class circleParticle : public GameObject
{
public:
	float speedX;
	float speedY;
	float timeSpan;	// time it's been alive
	float lifeSpan; // limit to the time it can alive
	float radius;

	virtual void update() override;
	virtual void draw() override;
};

class BoxParticle : public circleParticle
{
public:

	point dim;

	virtual void draw() override;
};

//class GlassingLaser : public GameObject
//{
//
//	void Laser();
//	void Laser(point A, point B, int Length, int Damage, bool Active);
//
//	point b;
//	
//	//consecutivly connect to point A via connecting these segments.
//	point arr[10];
//
//	int damage;
//
//	int length;
//
//	virtual void update() override;
//	virtual void draw() override;
//
//};