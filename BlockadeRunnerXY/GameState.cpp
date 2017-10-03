
#include "GameState.h"





GameState::GameState()
{

}

void GameState::init()
{
	mouse.enabled = true;
	player.enabled = true;
	for (int i = 0; i < 20; i++)
	{
		enemy[i].enabled = false;
	}
	for (int i = 0; i < 100; i++)
	{
		projectile[i].enabled = false;
	}
}








void GameState::update()
{
	if (player.enabled == true)
	{
		player.update();
	}
	if (mouse.enabled == true)
	{
		mouse.update();
	}
	for (int i = 0; i < 20; i++)
	{
		if (enemy[i].enabled == true)
		{
			enemy[i].update();
		}

	}
	for (int i = 0; i < 100; i++)
	{
		if (projectile[i].enabled == true)
		{
			projectile[i].update();
		}
	}
}

void GameState::draw()
{
	if (player.enabled == true)
	{
		player.draw();
	}
	if (mouse.enabled == true)
	{
		mouse.draw();
	}
	for (int i = 0; i < 20; i++)
	{
		if (enemy[i].enabled == true)
		{
			enemy[i].draw();
		}

	}
	for (int i = 0; i < 100; i++)
	{
		if (projectile[i].enabled == true)
		{
			projectile[i].draw();
		}
	}
}