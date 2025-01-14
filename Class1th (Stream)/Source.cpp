#include <iostream>

int data = 1; // 데이터 영역

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의
	// 흐름입니다.

	// << (삽입 연산자)
	// 자신이 참조하고 있는 값을 반환하여 출력하는 연산자입니다.

	// int errorCode = -9999;
	// 
	// std::cout << "Hello World" << std::endl; // 줄바꿈 : "<< std::endl;"
	// 
	// std::cout << "errorCode : " << errorCode << std::endl;

	// >> (추출 연산자)
	// 특정한 값을 입력받은 다음 버퍼에 저장하는 연산자입니다.

	// int n = 0;
	// 
	// std::cin >> n; // scanf 느낌
	// 
	// std::cout << "n의 값 : " << n << std::endl;

#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자입니다.

	// int data = 10; // 스택 영역
	// 
	// std::cout << "data 변수의 값 :" << data << std::endl;
	// std::cout << "전역 변수 data의 값 : " << ::data << std::endl;

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을 
	// 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.



#pragma endregion

#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

	// int* p = new int;	
	// 
	// std::cout << "p가 가리키는 주소 : " << p << std::endl;
	// std::cout << "p가 가리키는 메모리의 값 : " << *p << std::endl;
	// 
	// delete p;
	// 
	// p = nullptr;
	// 
	// p = new int[3];
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	p[i] = (i + 1) * 10;
	// 
	// 	std::cout << "p[" << i << "]" << "의 값: " << p[i] << std::endl;
	// }
	// 
	// delete[ ] p;


#pragma endregion

	return 0;
}

