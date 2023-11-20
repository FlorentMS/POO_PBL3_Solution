#pragma once
#include "CLparcours.h"
#include "CLpoint3D.h"
#include <math.h>

#ifndef Classeparcours3D
#define Classeparcours3D

class CLparcours3D :
    public CLparcours
{
private:
    CLpoint3D** tab;
    
public:
    CLparcours3D();
    CLparcours3D(int nbPoint);
    ~CLparcours3D();

    float calculDistance(void);
    void message(void);
    void ajouterPoint(CLpoint3D* pPoint);
};

#endif // !Classeparcours3D