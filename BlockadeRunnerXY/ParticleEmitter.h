#pragma once
#include "GameObject.h"



class ParticleEmitter : public GameObject
{
	float spawnAccumulator = 0;

public:
	ParticleEmitter();

	const int parts = 200;

	//collection of all particles
	circleParticle particulates[200];

	void setParticleLoc(point object, int particleID);

	//current particle id

	int particleID;

	//Time between each particle spawned

	float spawnInterval = 0.1;

	virtual void update();
	virtual void draw();
};