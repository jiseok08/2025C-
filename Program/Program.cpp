#include <iostream>

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.
	
	// public : 클래스 내부와 자기가 상속하고 있는 클레스 그리고
	//			클래스 외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클레스까지만
	//			   접근을 허용하는 지정자입니다.

	// private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

private:
	int x;
protected:
	int y;
public:
	int z;

	int Z()
	{
		return z;
	}
};
class GameObject2
{
private:
	int x;
protected:
	int y;
public:
	int z;
	int Z()
	{
		return z;
	}
};
class GameObject3
{
private:
	int x;
protected:
	int y;
public:
	int z;
	int Z()
	{
		return z;
	}
};

void Swap(int & x, int & y)
{
	int temporary = x;
	x = y;
	y = temporary;
}

int main()
{
#pragma region 클레스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함
	// 되어 있으며, 클래스를 통해 객체를 생성하여 접근하고
	// 사용하는 집합체입니다.					(구조체와 비슷함)

	// GameObject gameObject1; // [ ] -> Stack
	// GameObject2 gameObject2;
	// GameObject3 gameObject3;
	// 
	// gameObject1.z = 5;
	// gameObject2.z = 10;
	// gameObject3.z = 20;
	// 
	// 
	// std::cout << "gameObjet1의 z 값 : " << gameObject1.Z() << std::endl;
	// std::cout << "gameObjet2의 z 값 : " << gameObject2.Z() << std::endl;
	// std::cout << "gameObjet3의 z 값 : " << gameObject3.Z() << std::endl;

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의
	// 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는
	// 클래스 영역에 포함되지 않습니다.

#pragma endregion

#pragma region 참조자
	// 어떤	변수의 메모리 공간에 다른 이름을
	// 지정하는 지정자입니다.

	int a = 10;
	int b = 20;

	Swap(a, b);

	std::cout << "a의 값 : " << a << std::endl;
	std::cout << "b의 값 : " << b << std::endl;




#pragma endregion


	return 0;
}