#include "Target.h"
#include"GameState.h"
#include"sfwdraw.h"
void Target::update(GameState & gs)
{
	if (x < gs.player.x)
	{
		x++
	}
	if (true)
	{

	}
}

void Target::draw()
{
	sfw::drawCircle(x, y, 7)
}
