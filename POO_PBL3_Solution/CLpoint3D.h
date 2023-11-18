#pragma once
#include "CLpoint.h"

#ifndef ClassePoint3D
#define ClassePoint3D

class CLpoint3D :
    public CLpoint
{
protected:
    float z;
public :
    CLpoint3D();
    CLpoint3D(float x, float y, float z);

    float getZ(void);
    void afficherCoordo();
};

#endif // !ClassePoint3D