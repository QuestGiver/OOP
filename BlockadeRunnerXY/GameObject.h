#pragma once
#include<string>

struct point
{
	float x;
	float y;
};

struct vector
{
	float x;
	float y;
	float z;
};



class GameObject
{



public:
	//std::string name;

	bool enabled;

	point a;

	virtual void update();
	virtual void draw();


};
class circleParticle : public GameObject
{
public:
	float speedX = 0;
	float speedY = 0;
	float timeSpan;	// time it's been alive
	float lifeSpan; // limit to the time it can alive
	float radius;
	point Object;
	virtual void update() override;
	virtual void draw() override;
};
