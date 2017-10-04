#include "Projectile.h"
#include "sfwdraw.h"
point Projectile::velocity(point player, point mouse, float Speed)
{
	point v;
	v.x = mouse.x - player.x;
	v.y = mouse.y - player.y;

	float p_vectLength = sqrt(v.x * v.x + v.y * v.y);
	point p_Unit;
	p_Unit.x = v.x / p_vectLength;
	p_Unit.y = v.y / p_vectLength;

	point p_velocity;
	p_velocity.x = p_Unit.x * Speed;
	p_velocity.y = p_Unit.y * Speed;

	return p_velocity;
}
Projectile::Projectile()
{
	enabled = false;
	rad = 5;
	speed = 300;
	lifeSpan = 0.7f;
	timeSpan = 0;
	growth = true;
	change = true;
	vert = 3;
	a.x = 80.0f;
	a.y = 80.0f;
	vel = {0, 0};

}

Projectile::Projectile(bool Enabled, float Radius,float Speed, point player, point mouse)
{
	enabled = Enabled;
	rad = Radius;
	speed = Speed;
	lifeSpan = 0.7f;
	timeSpan = 0;
	growth = true;
	change = true;
	vert = 3;
	a.x = 80.0f;
	a.y = 80.0f;
}



void Projectile::update()
{
	if (enabled)
	{

		timeSpan += sfw::getDeltaTime();
		if (timeSpan >= lifeSpan)
		{
			enabled = false;
		}



		a.x += vel.x * sfw::getDeltaTime();
		a.y += vel.y * sfw::getDeltaTime();

		if (growth)
		{
			rad += 0.1 * sfw::getDeltaTime();
		}
		else
		{
			rad -= 0.1 * sfw::getDeltaTime();
		}

		if (rad >= 15)
		{
			growth = false;
		}
		else if (rad <= 3)
		{
			growth = true;
		}




		
		if (change)
		{
			vert += 0.1 * sfw::getDeltaTime();
		}
		else
		{
			vert -= 0.1 * sfw::getDeltaTime();
		}

		if (vert >= 10)
		{
			vert = 10;
			change = false;
		}
		else if(vert <= 3)
		{
			change = true;
		}

	}




}

void Projectile::draw()
{
	if (enabled == true)
	{
		sfw::drawCircle(a.x, a.y, rad, vert, GREEN);
	}


}
