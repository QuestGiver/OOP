#include "GameObject.h"
#include <random>
#include "time.h"
#include "sfwdraw.h"

//void GlassingLaser::Laser()
//{
//	a.x = 0;
//	a.y = 0;
//	b.x = 0;
//	b.y = 0;
//
//	length = 20;
//	damage = 10;
//	enabled = false;
//}
//
//void GlassingLaser::Laser(point A, point B, int Length, int Damage, bool Active)
//{
//
//	a = A;
//	b = B;
//
//
//	length = Length;
//	damage = Damage;
//	enabled = Active;
//}

//void GlassingLaser::update()
//{
//}
//
//void GlassingLaser::draw()
//{
//}

bool drawing = true;

void circleParticle::update()
{
	a.x += (speedX * 10) * sfw::getDeltaTime();
	a.y += (speedY * 10) * sfw::getDeltaTime();

	if (a.x < 0)
	{
		a.x = 800;

	}

	if (a.x > 800)
	{
		a.x = 0;
	}

	if (a.y < 0)
	{
		a.y = 600;
	}

	if (a.y > 600)
	{
		a.y = 0;
	}

	timeSpan += sfw::getDeltaTime();

	if (timeSpan > lifeSpan)
	{
		enabled = false;
	}

	radius -= 20 * sfw::getDeltaTime();



}

void circleParticle::draw()
{
	if (enabled == true)
	{
		sfw::drawCircle(a.x, a.y, radius, 2, MAGENTA);
	}

}


void BoxParticle::draw()
{
	float halfX = dim.x / 2.0f;
	float halfy = dim.y / 2.0f;



	//left

	sfw::drawLine(a.x - halfX, a.y - halfy, a.x - halfX, a.y + halfy);
	//right
	sfw::drawLine(a.x + halfX, a.y - halfy, a.x + halfX, a.y + halfy);

	//top
	sfw::drawLine(a.x - halfX, a.y + halfy, a.x + halfX, a.y + halfy);

	//bottom
	sfw::drawLine(a.x - halfX, a.y - halfy, a.x + halfX, a.y - halfy);


}
