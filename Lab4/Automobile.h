#pragma once
#include "CargoTransporter.h"
class Automobile :
    public CargoTransporter
{

public:
    Automobile(int speed = 3, float cost = 0, float maxDistance = 1);
    ~Automobile();
};

