#pragma once
#include "GameObject.h"



class Emitter : public GameObject
{
	float spawnAccumulator= 0;

public:
	Emitter();
	//collection of all particles
	circleParticle particulates[100];

	//current particle id

	int particleID;

	//Time between each particle spawned

	float spawnInterval;

	virtual void update();
	virtual void draw();
};