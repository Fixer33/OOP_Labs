#include "OutsideVolley.h"

OutsideVolley::OutsideVolley(bool wait4wind, bool withRain, int players, int maxScore) : Volleyball(players, maxScore)
{
	std::cout << "Outside constr" << std::endl;
	_waitForWind = new bool(wait4wind);
	_withRain = new bool(withRain);
}

OutsideVolley::~OutsideVolley()
{
	std::cout << "Outside dest" << std::endl;
	delete _withRain;
	delete _waitForWind;
}

bool OutsideVolley::waitForWind()
{
	return *_waitForWind;
}

bool OutsideVolley::isWithRain()
{
	return *_withRain;
}

void OutsideVolley::PrintData()
{
	std::cout << "Максимально игроков: " << getPlayerCount() 
		<< " Максимально очков: " << getMaxScore() 
		<< " Ждать пока ветер стихнет: " << waitForWind()
		<< " Идёт дождь: " << isWithRain() << std::endl;
}
