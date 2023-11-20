#include "CLparcours3D.h"

void CLparcours3D::ajouterPoint(CLpoint* pPoint)
{	
#ifdef affichage
	std::cout << "ajouterPoint(CLpoint* pPoint) vide" << std::endl;
#endif

	int i = 0;
	while (*(tab + (i)) != NULL) {
		i++;
	}
	*(tab + (i)) = pPoint;
#ifdef affichage
	(*(tab + (i)))->afficherCoordo();
#endif
}

CLparcours3D::CLparcours3D()
{
	CLparcours3D(10);
}

CLparcours3D::CLparcours3D(int nbPoint)
{
	tab = new CLpoint * [nbPoint + 1];
	for (int i = 0; i <= nbPoint; i++) {
		*(tab + i) = NULL;
	}
}

CLparcours3D::~CLparcours3D()
{
	delete tab;
}

float CLparcours3D::calculDistance(void)
{
	float result = 0;
	int i = 0;
	while (*(tab + (i + 1)) != NULL) {
		result += sqrt(
			pow(
				(*(tab + i))->getX() - (*(tab + (i + 1)))->getX(),
				2
			)
			+ pow(
				(*(tab + i))->getY() - (*(tab + (i + 1)))->getY(),
				2
			)
			+ pow(
				(*(tab + i))->getZ() - (*(tab + (i + 1)))->getZ(),
				2
			));
		i++;
	}
	return result;
}

void CLparcours3D::message(void)
{
	CLparcours::message();
	std::cout << "3D" << std::endl;
}

void CLparcours3D::ajouterPoint(CLpoint3D* pPoint)
{
	#ifdef affichage
	std::cout << "ajouterPoint(CLpoint3D* pPoint)" << std::endl;
	#endif

	int i = 0;
	while (*(tab + (i)) != NULL) {
		i++;
	}
	*(tab + (i)) = pPoint;
#ifdef affichage
	(*(tab + (i)))->afficherCoordo();
#endif
}
