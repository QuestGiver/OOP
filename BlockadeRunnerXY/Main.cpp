#include<iostream>
#include"sfwdraw.h"
#include"GameState.h"

int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "sfw");


	//ser the backround color
	sfw::setBackgroundColor(BLACK);


	//initializers
	GameState gamestate;

	//set up the game loop
	while (sfw::stepContext())
	{

		gamestate.update();
		gamestate.draw();
		
		//game code goes here


	}

	sfw::termContext();
	//clean up

}