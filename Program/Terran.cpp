#include "Terran.h"
#include <iostream>

using namespace std;

Terran::Terran()
{
	attack = 0;
	health = 0;
	defense = 0;
}

void Terran::Stats()
{
	cout << "Terran attack : " << attack << endl;
	cout << "Terran health : " << health << endl;
	cout << "Terran defense : " << defense << endl;
}

