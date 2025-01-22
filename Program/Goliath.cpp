#include "Goliath.h"
#include <iostream>
using namespace std;

Goliath ::Goliath()
{
	attack = 12;
	health = 125;
	defense = 1;
	
}

void Goliath:: Stats()
{
	cout << "Goliath attack (지상) : " << attack << endl;
	cout << "Goliath attack (공중) : " << attack + 8 << endl;

	cout << "Goliath health : " << health << endl;
	cout << "Goliath defense : " << defense << endl;
}

