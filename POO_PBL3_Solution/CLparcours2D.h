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
public :
    CLparcours2D();
    CLparcours2D(int nbPoint);
    ~CLparcours2D();

    float calculDistance(void) override;
    void message(void) override;
    using CLparcours::ajouterPoint;
    //void ajouterPoint(CLpoint* pPoint) override;
};

#endif