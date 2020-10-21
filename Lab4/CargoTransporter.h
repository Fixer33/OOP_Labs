#pragma once
class CargoTransporter
{
protected:
	float _costPerKM;
	float _speed;
	float _maxDistance;

public:
	CargoTransporter(int speed, float cost, float maxDistance);
	~CargoTransporter();
	virtual float GetTransportingCost(float distance);
	virtual float GetTransportingTime(float distance);
};

