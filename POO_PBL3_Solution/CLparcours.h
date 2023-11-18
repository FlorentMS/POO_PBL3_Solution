#pragma once
#include "CLpoint.h"

#ifndef ClasseParcours
#define ClasseParcours

class CLparcours
{
protected :
	float distance;

public :
	virtual float calculDistance(void) = 0;
	virtual void message(void);
	virtual void ajouterPoint(CLpoint*) = 0;
};

#endif // 
