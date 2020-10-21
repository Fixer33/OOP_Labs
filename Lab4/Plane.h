#pragma once
#include "CargoTransporter.h"
class Plane :
    public CargoTransporter
{
private:
    float _maxHeight;

public:
    Plane(int speed, float cost, float maxDistance, float maxHeight);
    ~Plane();

};

