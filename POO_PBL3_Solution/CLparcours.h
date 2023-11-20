#pragma once
//#define affichage

#include "CLpoint.h"
#include "CLpoint3D.h"

#ifndef ClasseParcours
#define ClasseParcours

class CLparcours
{
protected :
	CLpoint** tab;

public :
	virtual float calculDistance(void) = 0;
	virtual void message(void);
	void ajouterPoint(CLpoint*);
};

#endif // 
