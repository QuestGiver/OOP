#include "sfwdraw.h"
#include "ParticleEmitter.h"



ParticleEmitter::ParticleEmitter()
{
	
	for (int i = 0; i < parts; i++)
	{
		particulates[i].enabled = false;
		particulates[i].speedX = 0;
		particulates[i].speedY = 0;
		particulates[i].lifeSpan = 0.3f;
		particulates[i].timeSpan = 0.0f;
		particulates[i].Object = {0,0};



	}
}

void ParticleEmitter::setParticleLoc(point object, int particleID)
{
	particulates[particleID].a.x = object.x;
	particulates[particleID].a.y = object.y;
}

void ParticleEmitter::update()
{
	// check if it's time to spawn a new one
	//if so, create one!\

	spawnAccumulator += sfw::getDeltaTime();


	//update all of the particles that are active

	//float Ptimer = sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		//look for a particle that isn't in use
		for (int i = 0; i < parts; i++)
		{
			if (particulates[i].enabled == false)
			{
				//reactivate and set it up
				circleParticle& baby = particulates[i];

				setParticleLoc(particulates[i].Object, i);


				baby.speedX = (rand() % 10 + (-5));
				baby.speedY = (rand() % 10 + (-5));


				baby.radius = 1;

				baby.enabled = true;

				particulates[i].timeSpan = 0.0f;
				particulates[i].lifeSpan = 0.3f;

				spawnAccumulator = 0.0f;
				break;

			}
		}



	}
	//update all of the particles that are active
	//for (int i = 0; i < 100; i++)
	//{

	//	if (particulates[i].timeSpan > timer + 1.5f)
	//	{
	//		particulates[i].enabled = false;
	//	}
	//}

	for (int i = 0; i < parts; i++)
	{
		if (particulates[i].enabled == true)
		{
			particulates[i].update();
		}
	}

}

void ParticleEmitter::draw()
{
	for (int i = 0; i < 2; i++)
	{
		if (particulates[i].enabled == true)
		{
			
			//particulates[i].draw();
			//sfw::drawCircle(particulates[i].Object.x, particulates[i].Object.y, particulates[i].radius, GREEN);
		}

	}
}
