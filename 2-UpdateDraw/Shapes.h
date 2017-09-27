#pragma once

class Circle
{

public:
	float posX;
	float posY;

	float radius;

	void draw();

};

class line
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	float length;

	void draw();


};

class Box
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
};