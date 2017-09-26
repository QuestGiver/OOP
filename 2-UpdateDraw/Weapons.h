#pragma once


struct point
{
	int x;
	int y;
};

class slingShot
{
public:
	//Draw function

	//can this object be drawn?
	bool active;

	//get the first position of the line
	point posA;

	//get the 2nd postion of the line
	point posB;

	//get the direction, length and speed of the bolt;
	slingShot direct(point x, point y);


	void update();
	void draw();

private:




};
