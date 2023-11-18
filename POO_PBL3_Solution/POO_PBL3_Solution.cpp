// POO_PBL3_Solution.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "CLpoint.h"
#include "CLpoint3D.h"
#include "CLparcours.h"
#include "CLparcours2D.h"
#include "CLparcours3D.h"

using namespace std;

void main(void) {
	int pause;

	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLparcours* parcours;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	parcours = new CLparcours2D(3);
	
	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();
	/*
	p1 = new CLpoint3D(0.0, 0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);
	p3 = new CLpoint3D(2.0, 2.0, 2.0);
	parcours = new CLparcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);
	
	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCoordo();
	*/
	cin/*.get()*/  >> pause;
}
