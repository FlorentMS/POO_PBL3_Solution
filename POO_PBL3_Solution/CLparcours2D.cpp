#include "CLparcours2D.h"

CLparcours2D::CLparcours2D()
{
	CLparcours2D(10);
}

CLparcours2D::CLparcours2D(int nbPoint)
{	
	tab = new CLpoint*[nbPoint+1];
	for (int i=0; i <= nbPoint; i++) {
		*(tab + i) = NULL;
	}
}

CLparcours2D::~CLparcours2D()
{
	delete tab;
}

float CLparcours2D::calculDistance(void)
{
	float result = 0;
	int i = 0;
	while (*(tab + (i+ 1)) != NULL) {
		result += sqrt(
					pow(
						(*(tab + i))->getX() - (*(tab + (i + 1)))->getX(),
						2
					)
					+ pow(
						(*(tab + i))->getY() - (*(tab + (i + 1)))->getY(),
						2
					));
		i++;
	}
	return result;
}

void CLparcours2D::message(void)
{
	CLparcours::message();
	std::cout << "2D" << std::endl;
}

void CLparcours2D::ajouterPoint(CLpoint* pPoint)
{
	int i = 0;
	while (*(tab + (i)) != NULL) {
		i++;
	}
	*(tab + (i)) = pPoint;
							(*(tab + (i)))->afficherCoordo();
}
