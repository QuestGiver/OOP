#pragma once
//Literally Include everything
#include"Collision.h"
#include"Player.h"

#include "Player.h"

class GameState
{
public:
	Player player;


	void init();
	void update();
	void draw();
};
