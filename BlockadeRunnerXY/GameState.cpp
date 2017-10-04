
#include "GameState.h"
#include "sfwdraw.h"
#include <iostream>



GameState::GameState()
{
	init();

}

void GameState::init()
{
	mouse.enabled = true;
	player.enabled = true;
	for (int i = 0; i < 10; i++)
	{
		enemy[i].enabled = true;
	}
	for (int i = 0; i < 100; i++)
	{
		projectile[i].enabled = false;
	}
}






const int ENEMIES_THAT_I_CARE_ABOUT = 10;

void GameState::update()
{
	if (player.enabled == true)
	{
		player.update();

		if (player.mouseDown == true)
		{

			for (int i = 0; i < 100; i++)
			{
				if (projectile[i].enabled == false)
				{

					std::cout << "success!";
					projectile[i].enabled = true;
					projectile[i].a.x = player.playerPos.x;
					projectile[i].a.y = player.playerPos.y;
					projectile[i].vel = projectile[i].velocity(player.playerPos, mouse.mouse, projectile[i].speed);
					projectile[i].timeSpan = 0;
					break;
				}
			}
		}
	}
	//----------------------------
	for (int i = 0; i < 100; i++)
	{
		if (projectile[i].enabled == true)
		{

			projectile[i].update();
		}
	}
	//-----------------------------
	if (mouse.enabled == true)
	{
		mouse.update();
	}
	//---------------------------------

	

	for (int i = 0; i < ENEMIES_THAT_I_CARE_ABOUT; i++)
	{
		if (enemy[i].enabled == true)
		{
			if (collision.isColliding(enemy[i].enemyPos, player.playerPos, enemy[i].rad, 3))
			{
				player.enabled = false;
				std::cout << "DIE PLAYER DIE" << std::endl;
			}
		}
	}

	for (int i = 0; i < ENEMIES_THAT_I_CARE_ABOUT; i++)
	{
		if (enemy[i].enabled == true)
		{
				for (int f = 0; f < 100; f++)
				{
					if (projectile[f].enabled == true)
					{
						if (collision.isColliding(enemy[i].enemyPos, projectile[f].a, enemy[i].rad, projectile[f].rad))
						{
							enemy[i].enabled = false;
							projectile[f].enabled = false;
						}
					}

				}
			enemy[i].update();
			point vel = enemy[i].velocity(player.playerPos, 2);
			enemy[i].enemyPos.x += vel.x;
			enemy[i].enemyPos.y += vel.y;
		}

	}
	//-----------------------------------------


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
	for (int i = 0; i < ENEMIES_THAT_I_CARE_ABOUT; i++)
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