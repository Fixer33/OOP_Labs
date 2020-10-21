#include "CargoTransporter.h"

CargoTransporter::CargoTransporter(int speed = 3, float cost = 0, float maxDistance = 1)
{
	if (speed >= 0)
		_speed = speed;
	else
		_speed = 0;

	if (cost < 0)
		_costPerKM = 0;
	else
		_costPerKM = cost;

	if (maxDistance <= 0)
		throw "Max distance can not be less or equal to 0";
	else
		_maxDistance = maxDistance;
}

CargoTransporter::~CargoTransporter()
{

}

float CargoTransporter::GetTransportingCost(float distance)
{
	if (distance > _maxDistance)
		return -1;

	return distance * _costPerKM;
}

float CargoTransporter::GetTransportingTime(float distance)
{
	if (distance > _maxDistance)
		return -1;

	return distance / _speed;
}
