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
	return this->x;
}

float CLpoint::getY(void)
{
	return this->y;
}

float CLpoint::getZ(void)
{	
	std::cerr << "Un point 2D n'a pas de troisième dimension";
	return 0.0f;
}

void CLpoint::afficherCoordo()
{
	std::cout << "Les coordonnees du point : " << this
		<< ", d'ID : " << NULL
		<< " et de type : 2D, sont (" << x << ":" << y << ")"
		<< std::endl;
}
