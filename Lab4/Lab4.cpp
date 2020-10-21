#include <iostream>
#include <list>
#include "Volleyball.h"
#include "BeachVolley.h"
#include "GymVolley.h"
#include "OutsideVolley.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    list<Volleyball*> l = list<Volleyball*>();
    GymVolley* gv = new GymVolley(); 
    l.push_back(gv);
    OutsideVolley* ov = new OutsideVolley(); 
    l.push_back(ov);
    BeachVolley* bv = new BeachVolley(); 
    l.push_back(bv);

    for (auto iter = l.begin(); iter != l.end(); iter++)
    {
        (*iter)->PrintData();
    }

    delete gv;
    delete ov;
    delete bv;
}