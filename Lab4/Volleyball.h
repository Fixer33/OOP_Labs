#pragma once
#include <iostream>

class Volleyball
{
private:
	int* _playerCount;
	int* _maxScore;

public:
	Volleyball(int players = 2, int maxScore = 25);
	~Volleyball();
	int getPlayerCount();
	int getMaxScore();
	virtual void PrintData() = 0;
};

