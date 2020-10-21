#include "GymVolley.h"

GymVolley::GymVolley(bool withOut, bool withWalls, int players, int maxScore) : Volleyball(players, maxScore)
{
	std::cout << "Gym const" << std::endl;
	_withOut = new bool(withOut);
	_ignoreWalls = new bool(withWalls);
}

GymVolley::~GymVolley()
{
	std::cout << "Gym dest" << std::endl;
	delete _withOut;
	delete _ignoreWalls;
}

bool GymVolley::isWithOut()
{
	return *_withOut;
}

bool GymVolley::ignoreWalls()
{
	return *_ignoreWalls;
}

void GymVolley::PrintData()
{
	std::cout << "Максимально игроков: " << getPlayerCount()
		<< " Максимально очков: " << getMaxScore()
		<< " С выходами: " << isWithOut()
		<< " Игнорировать стены: " << ignoreWalls() << std::endl;
}
