#include "Player.h"
#include "sfwdraw.h"
#include <iostream>
void Player::update()
{

	//player
	//playerPos.x = sfw::getMouseX();
	//playerPos.y = sfw::getMouseY();

	if (sfw::getKey('W'))
	{
		playerPos.y += 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('S'))
	{
		playerPos.y -= 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('D'))
	{
		playerPos.x += 80 * sfw::getDeltaTime();
	}
	if (sfw::getKey('A'))
	{
		playerPos.x -= 80 * sfw::getDeltaTime();
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
	timePassed += sfw::getDeltaTime();
	std::cout << timePassed << std::endl;
	if (sfw::getMouseButton(0) == true && timePassed > ROFtimer)
	{
		mouseDown = true;
		timePassed = 0;
	}
	else
	{
		
		mouseDown = false;
	}




}

void Player::draw()
{
	sfw::drawCircle(playerPos.x, playerPos.y, rad);
}

Player::Player()
{
	enabled = false;
	rad = 12;
	playerPos.x = 400.0f;
	playerPos.y = 300.0f;
	ROFtimer = 0.3f;
	timePassed = 0;
}
Player::Player(bool Enabled, float Rad)
{
	enabled = Enabled;
	rad = Rad;
	playerPos.x = 400.0f;
	playerPos.y = 300.0f;
	ROFtimer = 0.3f;
	timePassed = 0;
}
















//PLayers mouse

Mouse::Mouse()
{
	rad = 5;
	enabled = true;
	mouse.x = sfw::getMouseX();
	mouse.y = sfw::getMouseY();
}

Mouse::Mouse(bool Enabled, float Rad)
{
	rad = Rad;
	enabled = Enabled;
	mouse.x = sfw::getMouseX();
	mouse.y = sfw::getMouseY();
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
	sfw::drawCircle(mouse.x, mouse.y, rad, 2, MAGENTA);
}
