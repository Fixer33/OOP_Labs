#include "Volleyball.h"
#include <iostream>

Volleyball::Volleyball(int players, int maxScore)
{
	std::cout << "Volleyball constr" << std::endl;

	if (players < 0)
		_playerCount = new int(0);
	else
		this->_playerCount = new int(players);

	if (maxScore < 1)
		_maxScore = new int(1);
	else
		this->_maxScore = new int(maxScore);
}

Volleyball::~Volleyball()
{
	std::cout << "Volleyball destr" << std::endl;
	delete _playerCount;
	delete _maxScore;
}

int Volleyball::getPlayerCount()
{
	return *this->_playerCount;
}

int Volleyball::getMaxScore()
{
	return *this->_maxScore;
}
