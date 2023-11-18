#pragma once
#include <vector>
#include "CLparcours.h"
#include "CLpoint.h"
#include <math.h>

#ifndef Classeparcours2D
#define Classeparcours2D

class CLparcours2D :
    public CLparcours
{
private :
    CLpoint* *tab;

public :
    CLparcours2D();
    CLparcours2D(int nbPoint);
    ~CLparcours2D();

    float calculDistance(void);
    void message(void);
    void ajouterPoint(CLpoint*);
};

#endif