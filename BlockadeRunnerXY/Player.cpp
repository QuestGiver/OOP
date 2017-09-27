#include "Player.h"
#include "sfwdraw.h"
void Player::update()
{

	//mouse
	mouse.x = sfw::getMouseX();
	mouse.y = sfw::getMouseY();
	if (mouse.x < 0)
	{
		mouse.x = 0;

	}
	if (mouse.x > 800)
	{
		mouse.x = 800;
	}
	if (mouse.y < 0)
	{
		mouse.y = 0;
	}
	if (mouse.y > 600)
	{
		mouse.y = 600;
	}




	//weapon interaction




}

void Player::draw()
{
	sfw::drawCircle(mouse.x, mouse.y, 5);
}

Player::Player()
{


	Health = 50;
	Defence = 2;
	Attack = 5;
}
Player::Player(bool Enabled, int HP, int Atk)
{

	Health = HP;
	Attack = Atk;
}