#include "BeachVolley.h"

BeachVolley::BeachVolley(bool inWater, int players, int maxScore) : Volleyball(players, maxScore), _inWater(new bool(inWater))
{
	std::cout << "Beach const" << std::endl;
}

BeachVolley::~BeachVolley()
{
	std::cout << "Beach dest" << std::endl;
	delete _inWater;
}

bool BeachVolley::isInWater()
{
	return *_inWater;
}

void BeachVolley::PrintData()
{
	std::cout << "Максимально игроков: " << getPlayerCount()
		<< " Максимально очков: " << getMaxScore()
		<< " В воде: " << isInWater() << std::endl;
}
