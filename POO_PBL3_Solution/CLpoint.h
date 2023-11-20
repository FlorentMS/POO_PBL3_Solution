#pragma once
#include <iostream>

#ifndef ClassePoint
#define ClassePoint

class CLpoint
{
protected :
	float x;
	float y;

public :
	CLpoint();
	CLpoint(float x, float y);

	float getX(void);
	float getY(void);
	virtual float getZ(void);

	virtual void afficherCoordo();
};

#endif