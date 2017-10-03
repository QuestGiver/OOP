#include "Enemy.h"
#include "sfwdraw.h"
Enemy::Enemy()
{
}

Enemy::Enemy(bool Enabled, float Rad)
{
	rad = Rad;
	enabled = Enabled;
}

void Enemy::update()
{
}

void Enemy::draw()
{
	sfw::drawCircle(a.x, a.y, rad, 2, RED);
}
