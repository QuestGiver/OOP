#include "Emitter.h"

#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; i++)
	{
		particulates[i].enabled = false;
	}
}

void Emitter::update()
{
	// check if it's time to spawn a new one
	//if so, create one!\

	spawnAccumulator += sfw::getDeltaTime();


	//update all of the particles that are active

	float timer = sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		//look for a particle that isn't in use
		for (int i = 0; i < 100; i++)
		{
			if (particulates[i].enabled == false)
			{
				//reactivate it
				circleParticle& baby = particulates[i];

				baby.a.x = sfw::getMouseX();
				baby.a.y = sfw::getMouseY();

				baby.speedX = (rand()% 10 + (-5));
				baby.speedY = (rand()% 10 + (-5));


				baby.radius = rand() % 10 + 1;

				baby.enabled = true;

				particulates[i].timeSpan = 0.0f;
				particulates[i].lifeSpan = 0.5f;

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

	for (int i = 0; i < 100; i++)
	{
		if (particulates[i].enabled == true)
		{
			particulates[i].update();
		}
	}

}

void Emitter::draw()
{
	for (int i = 0; i < 100; i++)
	{
		if (particulates[i].enabled == true)
		{
			particulates[i].draw();
		}

	}
}
