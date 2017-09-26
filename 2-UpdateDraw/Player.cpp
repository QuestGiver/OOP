#include "Player.h"
#include "sfwdraw.h"
#include "Weapons.h"
void Player::update()
{

	//if (sfw::getKey('D'))
	//{
	//	x++;
	//}
	//if (sfw::getKey('A'))
	//{
	//	x--;
	//}
	x = sfw::getMouseX();
	y = sfw::getMouseY();



	//weapon interaction
	bool weaponActive = false;
	point A;
	point B;
	if (sfw::getMouseButton(MOUSE_BUTTON_LEFT))
	{
		A.x = sfw::getMouseX();
		A.y = sfw::getMouseX();
	}

	if (sfw::getMouseButton(MOUSE_BUTTON_RIGHT))
	{
		B.x = sfw::getMouseX();
		B.y = sfw::getMouseY();

		weaponActive = true;
	}



}

void Player::draw()
{
	sfw::drawCircle(x, y, 5);
}
