#include "Player.h"
#include "sfwdraw.h"
void Player::update()
{


	a.x = sfw::getMouseX();
	a.y = sfw::getMouseY();

	if (a.x < 0)
	{
		a.x = 0;

	}

	if (a.x > 800)
	{
		a.x = 800;
	}

	if (a.y < 0)
	{
		a.y = 0;
	}

	if (a.y > 600)
	{
		a.y = 600;
	}




	//weapon interaction




}

void Player::draw()
{
	sfw::drawCircle(a.x, a.y, 5);
}

Player::Player()
{


	Health = 50;
	Defence = 2;
	Attack = 5;
}
Player::Player(bool Enabled,int HP, int Def, int Atk)
{

	Health = HP;
	Defence = Def;
	Attack = Atk;
}