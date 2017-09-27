#pragma once
class Player
{
public:
	float x;
	float y;

	void update(GameState& gs);
	void draw();
};