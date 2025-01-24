#include "Pencil.h"
#include <iostream>

using namespace std;

Pencil::Pencil()
{
	thickness = 0.25f;
}

void Pencil::Draw()
{
	cout << "±½±â : " << thickness << endl;
	cout << "Pencil Draw" << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
}
