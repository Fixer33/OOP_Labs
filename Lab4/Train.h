#pragma once
#include "CargoTransporter.h"
class Train :
    public CargoTransporter
{
private:


public:
    Train(int speed, float cost, float maxDistance);
    ~Train();

};

