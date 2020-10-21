#pragma once
#include "Volleyball.h"
#include <iostream>

class GymVolley : public Volleyball
{
private:
	bool* _withOut;
	bool* _ignoreWalls;

public:
	GymVolley(bool withOut = true, bool ignorewalls = true, int players = 2, int maxScore = 25);
	~GymVolley();
	bool isWithOut();
	bool ignoreWalls();
	virtual void PrintData() override;
};

