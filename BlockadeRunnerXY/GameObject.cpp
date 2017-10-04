#include "GameObject.h"
#include <random>
#include <iostream>
#include "time.h"
#include "sfwdraw.h"



bool drawing = true;

void circleParticle::update()
{
	//a.x += (speedX * 10) * sfw::getDeltaTime();
	//a.y += (speedY * 10) * sfw::getDeltaTime();

	//if (a.x < 0)
	//{
	//	a.x = 800;

	//}

	//if (a.x > 800)
	//{
	//	a.x = 0;
	//}

	//if (a.y < 0)
	//{
	//	a.y = 600;
	//}

	//if (a.y > 600)
	//{
	//	a.y = 0;
	//}

	timeSpan += sfw::getDeltaTime();

	if (timeSpan > lifeSpan)
	{
		enabled = false;
		timeSpan = 0;
	}

	radius -= 20 * sfw::getDeltaTime();



}

void circleParticle::draw()
{
	
		sfw::drawCircle(Object.x, Object.y, radius, GREEN);
	std::cout << "Dumb" << std::endl;

}


