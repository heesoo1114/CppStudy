#include <iostream>

using namespace std;

int main()
{
	/*
		논리 연산자의 종류

		ex. A 논리 연산자 B

		단항 연산자
		- !(NOT) : o을 제외한 모든 것은 true로, o만은 false로 (그냥 반대로 해준다고 생각하면 편함)

		이항 연산자
		- &&(AND) : A와 B가 true이면 true, A와 B 중 하나만 false이어도 false
		- ||(OR) : A와 B 중 하나만 true이어도 true, 즉 A와 B가 false이면 false

		결과값은 bool 타입으로 저장
	*/

	#pragma region 우선순위

	// 우선순위
	// ! > && > ||

	int a = 3;
	int b = 3;
	int c = 4;

	if (!a == b) // 위험한 코드
	{
		// (!a) == b 로 실행
		// !(a == b 로 수정해주자
	}

	if (a || b && c)
	{
		// a || (b && c) 로 실행
		// (a || b) && c 로 수정해주자
	}

	#pragma endregion

	#pragma region 주의사항

	int x = 2;
	int y = 2;

	if (x == 1 && y++ == 2)
	{
		// nothing
	}

	cout << y << endl; // 2 출력

	/*
		if문에서 분명 y++을 해주었는데 왜 2가 출력이 될까?

		&&(AND) 는 A && B 에서 A가 false이면 B는 연산하지 않음
		A와 b 중 하나만 false이어도 결과는 false임
	*/

	#pragma endregion
	
	#pragma region XOR

	/*
		A XOR B

		A와 B의 bool값이 다르면 true, 같으면 false
		
		c++에서는 XOR 연산자가 없기 떄문에
		if (A != B) 로 표현하여 사용함

		+ (^)는 비트 연산자로서의 XOR
	*/

	#pragma endregion

	#pragma region 드모르간법칙
	
	/*
		!(a && b) = !a || !b  
		!(a || b) = !a && !b 

		!(a && b) != !a && !b
		!(a || b) != !a || !b
	*/

	#pragma endregion

	return 0;
}