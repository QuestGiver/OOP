#include<iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Weapons.h"
int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "sfw");


	//ser the backround color
	sfw::setBackgroundColor(BLUE);

	Player me;
	me.x = 400;
	me.y = 300;
	//set up the game loop
	while (sfw::stepContext())
	{

		me.update();
		me.draw();
		//game code goes here
		if ()
		{

		}
		sfw::drawCircle(400, 300, 70);
	}

	sfw::termContext();
	//clean up
}