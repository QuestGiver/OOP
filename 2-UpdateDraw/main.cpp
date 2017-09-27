#include<iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Weapons.h"
#include "Shapes.h"
int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "sfw");


	//ser the backround color
	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = 400;
	me.y = 300;

	Circle disc;
	disc.posX = 60;
	disc.posY = 60;
	disc.radius = 60;
	
	Box rect;
	rect.bottomLeftX = 100;
	rect.bottomLeftY = 100;
	rect.topRightX = 200;
	rect.topRightY = 300;

	//set up the game loop
	while (sfw::stepContext())
	{

		me.update();
		me.draw();
		rect.draw();
		disc.draw();
		//game code goes here


	}

	sfw::termContext();
	//clean up
}