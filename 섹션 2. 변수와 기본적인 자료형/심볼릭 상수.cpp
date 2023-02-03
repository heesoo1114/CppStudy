#include <iostream>

using namespace std;

int main()
{
	const float compile_gravity{ 9.8 }; // 컴파일 타임에 결정 
	constexpr float GRAVITY{ 9.77779f }; 
	// constexpr : 컴파일 타임에 결정됨을 알려주는 키워드

	// compile_gravity = 1.2; (에러코드) -> 상수는 변경이 불가능

	float number;
	cin >> number;

	const float runtime_gravity(number); // 런타임에 결정
	// runtime_gravity 변수에 constexpr 키워드를 사용할 수 없는 이유 : 값이 런타임에 결정되기 떄문 

	/*
		- const 상수는 무조건 초기화
		- const 상수는 변경 불가능
		- 함수 매개변수에도 const를 붙여서 매개변수 값을 변형시키는 것을 막음
		- const 상수를 헤더파일에 모아두는 것도 좋음
		- C++에선 #define 매크로 잘 쓰지 않음
	*/

	return 0;
}