#include <iostream>

using namespace std;

class Terran
{
protected:
	int health;
	int defense;
public:
	Terran()
	{
		cout << "Created Terran" << endl;
		cout << endl;
	}
};

class Marine : public Terran
{
	int attack;
public:
	Marine()
	{
		attack = 6;
		health = 40;
		defense = 0;

		cout << "Created Marine" << endl;
	}
	void Stats()
	{
		cout << "Marine Health : " << health << endl;
		cout << "Marine Defense : " << defense << endl;
		cout << "Marine Attack : " << attack << endl;

		cout << endl;
	}
};

class Firebat : public Terran
{
	int attack;
public:
	Firebat()
	{
		attack = 16;
		health = 50;
		defense = 1;

		cout << "Created Firebat" << endl;
	}

	void Stats()
	{
		cout << "Firebat Health : " << health << endl;
		cout << "Firebat Defense : " << defense << endl;
		cout << "Firebat Attack : " << attack << endl;

		cout << endl;
	}
};

class Ghost : public Terran
{
	int attack;
public:
	Ghost()
	{
		health = 45;
		attack = 10;
		defense = 1;

		cout << "Created Ghost" << endl;
	}

	void Stats()
	{
		cout << "Ghost Health : " << health << endl;
		cout << "Ghost Defense : " << defense << endl;
		cout << "Ghost Attack : " << attack << endl;

		cout << endl;
	}
};

int main()
{
#pragma region 캡슐화
	// 클래스 안에 서로 연관되어 있는 속성들과 기능들을 하나의 캡슐로
	// 만들어 데이터를 외부로부터 보호하며, 사용자에게 인터페이스를
	// 제공하는 클래스의 기능을 사용하는 것입니다.

#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능입니다.

	// Terran terran;
	// 
	// Marine marine;
	// marine.Stats();
	// 
	// Firebat firebat;
	// firebat.Stats();
	// 
	// Ghost ghost;
	// ghost.Stats();
	// 
	// cout << "Terran 객체의 메모리 크기 : " << sizeof(Terran) << endl;
	// cout << "Marine 객체의 메모리 크기 : " << sizeof(Marine) << endl;
	// cout << "Firebat 객체의 메모리 크기 : " << sizeof(Firebat) << endl;
	// cout << "Ghost 객체의 메모리 크기 : " << sizeof(Ghost) << endl;

	// 클래스의 상속 관계에서 상위 클레스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion


	return 0;
}