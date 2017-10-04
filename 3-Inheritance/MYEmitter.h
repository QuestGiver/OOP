#pragma once
#include "GameObject.h"



class Emitter : public GameObject
{
	float spawnAccumulator= 0;

public:
	Emitter();

	point Object;

	const int parts = 200;

	//collection of all particles
	circleParticle particulates[200];

	void setParticleLoc(point object, int particleID);

	//current particle id

	int particleID;

	//Time between each particle spawned

	float spawnInterval;

	virtual void update();
	virtual void draw();
};