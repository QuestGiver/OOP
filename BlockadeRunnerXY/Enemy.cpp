#include "Enemy.h"
#include "sfwdraw.h"
#include "random"
Enemy::Enemy()
{
	rad = 6;
	enabled = false;
	enemyPos.x = rand()% 800 + 1;
	enemyPos.y = rand() % 600 + 1;
}

Enemy::Enemy(bool Enabled, float Rad)
{
	rad = Rad;
	enabled = Enabled;
	enemyPos.x = rand() % 800 + 1;
	enemyPos.y = rand() % 600 + 1;
}

void Enemy::update()
{
	



	if (enabled)
	{
		//screen wrap
		if (enemyPos.x < 0)
		{
			enemyPos.x = 0;
		}
		if (enemyPos.x > 800)
		{
			enemyPos.x = 800;
		}
		if (enemyPos.y < 0)
		{
			enemyPos.y = 0;
		}
		if (enemyPos.y > 600)
		{
			enemyPos.y = 600;
		}
	}

}

point Enemy::velocity( point player, float Speed)
{
	point v;
	v.x = player.x - enemyPos.x;
	v.y = player.y - enemyPos.y;

	float p_vectLength = sqrt(v.x * v.x + v.y * v.y);
	point p_Unit;
	p_Unit.x = v.x / p_vectLength;
	p_Unit.y = v.y / p_vectLength;

	point p_velocity;
	p_velocity.x = p_Unit.x * Speed;
	p_velocity.y = p_Unit.y * Speed;

	return p_velocity;
}

void Enemy::draw()
{
	sfw::drawCircle(enemyPos.x, enemyPos.y, rad, 2, RED);
}
