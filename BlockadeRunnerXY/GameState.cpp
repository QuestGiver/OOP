
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
	timer = 0;
	for (int i = 0; i < emitter.parts; i++)
	{
		emitter.particulates[i].enabled = false;
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
	//------------------------------------
	for (int i = 0; i < 100; i++)
	{
		if (projectile[i].enabled == true)
		{
			for (int f = 0; f < emitter.parts; f++)
			{
				if (emitter.particulates[f].enabled == true)
				{
					emitter.particulates[f].Object = projectile[i].a;
				}
			}
		}
	}
	
	emitter.update();
	//-----------------------------
	if (mouse.enabled == true)
	{
		mouse.update();
	}
	//---------------------------------


	timer += sfw::getDeltaTime();
	float respawnTime = 0.5f;

	if (timer > respawnTime)
	{
		for (int i = 0; i < ENEMIES_THAT_I_CARE_ABOUT; i++)
		{
			if (enemy[i].enabled == false)
			{

				std::cout << "success!";
				enemy[i].enabled = true;
				enemy[i].enemyPos.x = rand() % 800 + 1;
				enemy[i].enemyPos.y = rand() % 600 + 1;

				while (abs(enemy[i].enemyPos.x - player.playerPos.x) < 100 && abs(enemy[i].enemyPos.y - player.playerPos.y) < 100)
				{
					enemy[i].enemyPos.x = rand() % 800 + 1;
					enemy[i].enemyPos.y = rand() % 600 + 1;
				}

				timer = 0;
				break;
			}
		}
	}


	for (int i = 0; i < ENEMIES_THAT_I_CARE_ABOUT; i++)
	{
		if (enemy[i].enabled == true)
		{
			if (collision.isColliding(enemy[i].enemyPos, player.playerPos, enemy[i].rad, player.rad))
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
			point vel = enemy[i].velocity(player.playerPos, 60 * sfw::getDeltaTime());
			enemy[i].enemyPos.x += vel.x;
			enemy[i].enemyPos.y += vel.y;
		}

	}
	//-----------------------------------------


}

void GameState::draw()
{
	emitter.draw();
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