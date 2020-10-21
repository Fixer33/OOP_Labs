#pragma once
#include "Volleyball.h"
#include <iostream>
class OutsideVolley : public Volleyball
{
private:
	bool* _waitForWind;
	bool* _withRain;

public:
	OutsideVolley(bool wait4wind = true, bool withRain = false, int players = 2, int maxScore = 25);
	~OutsideVolley();
	bool waitForWind();
	bool isWithRain();
	virtual void PrintData() override;
};

