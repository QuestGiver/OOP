#include "Projectile.h"
#include "sfwdraw.h"
Projectile::Projectile()
{
	enabled = false;
	rad = 5;
}

Projectile::Projectile(bool Enabled, float Radius)
{
	enabled = Enabled;
	rad = Radius;
}

void Projectile::update()
{

}

void Projectile::draw()
{
	if (enabled == true)
	{
		sfw::drawCircle(a.x, a.y, rad, 3, GREEN);
	}
}
