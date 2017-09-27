#include "Officer.h"
#include "Person.h"
#include<iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "GameObject.h"
#include "Emitter.h"
int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "sfw");


	//ser the backround color
	sfw::setBackgroundColor(BLACK);

	person me("Paul Guy", 90);
	me.greet();
	me.isHappy();

	Officer cole("Cole Phelps", 20, 7142);
	cole.greet();
	cole.isHappy();

	circleParticle basePartical();

	Player guy(true,50,10,15);
	
	Emitter emitter;
	emitter.spawnInterval = 0.0f;
	

	//set up the game loop
	while (sfw::stepContext())
	{

		emitter.update();
		emitter.draw();
		guy.update();
		guy.draw();


		//game code goes here


	}

	sfw::termContext();
	//clean up
	
}
