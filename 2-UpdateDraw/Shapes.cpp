#include "Shapes.h"

#include "sfwdraw.h"

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius);
}

void line::draw()
{
	sfw::drawLine(startX, startY, endX, endY, length);
}

void Box::draw()
{
	//Bottom
	sfw::drawLine(bottomLeftX, bottomLeftY, topRightX, bottomLeftY);
	//left
	sfw::drawLine(bottomLeftX, bottomLeftY, bottomLeftX, topRightY);

	//top
	sfw::drawLine(bottomLeftX, topRightY, topRightX, topRightY);
	//right

	sfw::drawLine(topRightX, topRightY, topRightX, bottomLeftY);
}
