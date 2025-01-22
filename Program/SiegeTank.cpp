#include "SiegeTank.h"
#include <iostream>
using namespace std;


SiegeTank::SiegeTank()
{
	attack = 30;
	health = 150;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "SiegeTank attack : " << attack << endl;
	cout << "SiegeTank attack (Siege Mode) : " << attack + 50 << endl;
	cout << "SiegeTank health : " << health << endl;
	cout << "SiegeTank defense : " << defense << endl;
}
