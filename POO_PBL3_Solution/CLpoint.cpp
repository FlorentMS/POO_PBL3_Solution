#include "CLpoint.h"

CLpoint::CLpoint() :
	x(1.0) , y(1.0)
{
}

CLpoint::CLpoint(float x, float y) :
	x(x), y(y)
{
}

float CLpoint::getX(void)
{
	return x;
}

float CLpoint::getY(void)
{
	return y;
}

void CLpoint::afficherCoordo()
{
	std::cout << "Les coordonnées du point : " << this
		<< ", d'ID : "
		<< " et de type : 2D, sont (" << x << ":" << y << ")"
		<< std::endl;
}
