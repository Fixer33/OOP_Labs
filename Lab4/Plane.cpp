#include "Plane.h"

Plane::Plane(int speed = 1, float cost = 0, float maxDistance = 1, float maxHeight = 1) : CargoTransporter(speed, cost, maxDistance)
{
    if (maxHeight < .5f)
        throw "Max height is too low";
    else
        _maxHeight = maxHeight;
}

Plane::~Plane()
{
}
