#include "CLpoint3D.h"

CLpoint3D::CLpoint3D() :
	CLpoint(1,1) , z(1)
{
}

CLpoint3D::CLpoint3D(float x, float y, float z) :
	CLpoint(x, y), z(z)
{
}

float CLpoint3D::getZ(void)
{
	return this->z;
}

void CLpoint3D::afficherCoordo()
{
	std::cout << "Les coordonnees du point : " << this
		<< ", d'ID : " << NULL
		<< " et de type : 3D, sont (" << x << ":" << y << ")"
		<< "(" << this->z <<")"
		<< std::endl;
}
