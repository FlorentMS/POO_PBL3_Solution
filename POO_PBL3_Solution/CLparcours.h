#pragma once
#define affichage

#include "CLpoint.h"
#include "CLpoint3D.h"

#ifndef ClasseParcours
#define ClasseParcours

class CLparcours
{
protected :
	float distance;

public :
	virtual float calculDistance(void) = 0;
	virtual void message(void);
	virtual void ajouterPoint(CLpoint*);
	virtual void ajouterPoint(CLpoint3D*);
};

#endif // 
