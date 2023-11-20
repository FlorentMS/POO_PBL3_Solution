#include <iostream>
#include "CLparcours.h"


void CLparcours::message(void)
{
	std::cout << "Calcul d'un parcours de type ";
}

void CLparcours::ajouterPoint(CLpoint* pPoint)
{
#ifdef affichage
	std::cout << "ajouterPoint(CLpoint* pPoint)" << std::endl;
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
