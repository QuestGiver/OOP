#include "Player.h"
#include "sfwdraw.h"
void Player::update()
{

	//player
	//playerPos.x = sfw::getMouseX();
	//playerPos.y = sfw::getMouseY();

	if (sfw::getKey('w'))
	{
		playerPos.y += 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('s'))
	{
		playerPos.y -= 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('d'))
	{
		playerPos.x += 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('a'))
	{
		playerPos.y -= 80 * sfw::getDeltaTime();
	}

	//screen wrap
	if (playerPos.x < 0)
	{
		playerPos.x = 0;
	}
	if (playerPos.x > 800)
	{
		playerPos.x = 800;
	}
	if (playerPos.y < 0)
	{
		playerPos.y = 0;
	}
	if (playerPos.y > 600)
	{
		playerPos.y = 600;
	}




	//weapon interaction




}

void Player::draw()
{
	sfw::drawCircle(playerPos.x, playerPos.y, 5);
}

Player::Player()
{
	enabled = false;
	rad = 12;


}
Player::Player(bool Enabled, float Rad)
{
	enabled = Enabled;
	rad = Rad;
}
















//PLayers mouse

Mouse::Mouse()
{
	rad = 5;
}

Mouse::Mouse(bool Enabled, float Rad)
{
	rad = Rad;
	enabled = Enabled;
}

void Mouse::update()
{
	//brain, source of all main logic adjustments
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
}

void Mouse::draw()
{
	sfw::drawCircle(a.x, a.y, rad, 2, MAGENTA);
}
