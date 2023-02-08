#include <iostream>
#include <typeinfo>

using namespace std;

enum Color
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3

	/*
		- 정의할 때 정수를 지정해 줄 수 있음
		- 아래로 갈수록 +1이 되서 저장됨
		- 내부적으로 정수로 저장
		- 같은 정수를 지정해 줄 수는 없음
		- 다른 enum 영억이어도 변수명이 같으면 안 됨
		- enum 변수를 읽어오는 건 되지만 쓰지는 못함
		- 입력받아서 정수를 지정해 줄 수 없음
	*/
};

enum class Color2
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3
};

enum class Color3
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3
};

int main()
{
	Color a = COLOR_BLACK; // paint 에 내부적으로는 0이 들어가게 됨
	Color b(COLOR_BLUE); // house에 내부적으로는 2가 들어가게 됨
	Color c{ COLOR_RED }; // apple에 내부적으로 1이 들어가게 됨 

	cout << c << endl; // 1 출력

	Color ex1 = -3; // 에러코드 (자료형이 다름 Color != int)
	int color_id = COLOR_RED;  // 읽어오는 건 가능 (2 들어감)

	Color ex2 = color_id; // 에러코드 (자료형이 다름)
	Color ex3 = static_cast<Color>(-3); // 2를 Color 자료형으로 형 변환을 해주면 가능

	#pragma region 열거형클래스

	Color2 c1 = Color2::COLOR_BLACK; // 내부적으로 0을 가지고 있음
	Color3 c2 = Color3::COLOR_BLACK; // 내부적으로 0을 가지고 있음

	/*
		enumclass를 사용하면 같은 0을 가지고 있어도 
		enum의 영역을 엄격하게 구분 지어 제한해 줌

		그러나 int로 형 변환을 해주면 비교했을 때 같다고 나옴
	*/

	#pragma endregion

	return 0;
}