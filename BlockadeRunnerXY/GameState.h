#pragma once
//Literally Include everything
#include"Collision.h"
#include"Player.h"
#include"Enemy.h"
#include"Projectile.h"
#include"GameObject.h"
#include "ParticleEmitter.h"



class GameState
{
public:
	Player player;
	Mouse mouse;
	Enemy enemy[20];
	Projectile projectile[100];
	Collision collision;
	ParticleEmitter emitter;
	float timer;
	GameState();
	

	//Use init for setting up stuff normally  reserved for operations before the actual game loop; I.e, spawning items and setting them to disabled.
	void init();

	//Brain
	void update();

	//eyes
	void draw();
};
