#include "Vulture.h"
#include <iostream>
using namespace std;

Vulture::Vulture()
{
	attack = 20;
	health = 80;
	defense = 0;
}

void Vulture::Stats()
{
	cout << "Vulture attack : " << attack << endl;
	cout << "Vulture health : " << health << endl;
	cout << "Vulture defense : " << defense << endl;
}
