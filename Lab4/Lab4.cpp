#include <iostream>
#include "CargoTransporter.h"
#include "Plane.h"
#include "Train.h"
#include "Automobile.h"
#include <list>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    list<CargoTransporter> l = list<CargoTransporter>();
    Plane boeing = Plane(828, 5, 1000, 12500); l.push_back(boeing);
    Train electrichka = Train(100, .04f, 300); l.push_back(electrichka);
    Train highSpeed = Train(300, .06f, 500); l.push_back(highSpeed);
    Automobile ford = Automobile(120, .1f, 1000); l.push_back(ford);

    float distance = 50;
    for (auto iter = l.begin(); iter != l.end(); iter++)
    {
        cout << "Для расстояния " << distance << "km: Цена: " << iter->GetTransportingCost(distance) 
                                                    << " за " << iter->GetTransportingTime(distance) << " часов" << endl;
    }
}