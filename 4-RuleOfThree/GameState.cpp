#include "GameState.h"

void GameState::update()
{
	player.update(*this);
	target.update(*this);
}

void GameState::draw()
{
	player.draw();
	target.draw();
}
