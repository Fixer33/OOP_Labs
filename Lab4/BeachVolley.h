#pragma once
#include "Volleyball.h"
#include <iostream>

class BeachVolley : public Volleyball
{
private:
	bool* _inWater;

public:
	BeachVolley(bool inWater = false, int players = 2, int maxScore = 25);
	~BeachVolley();
	bool isInWater();
	virtual void PrintData() override;
};

