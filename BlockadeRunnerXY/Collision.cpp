#include "Collision.h"
#include <cmath>

//Collision::Collision()
//{

//}

//collision::collision(point a, point b, float R1, float R2)
//{
//	float sum = R1 + R2;
//	float d = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.x, 2));
//	collide(d, sum);
//}

bool Collision::isColliding(point a, point b, float R1, float R2)
{
	float sum = R1 + R2;
	float d = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	//collide(d, sum);
	if (d < sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}





