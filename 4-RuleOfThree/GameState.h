#pragma once
#include"Player.h"
#include"Target.h"
class GameState
{
	Player player;
	Target target;
	void update();
	void draw();
};