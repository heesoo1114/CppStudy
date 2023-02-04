#include <iostream>

using namespace std;

int main()
{
	// comma operator
	// 참고로 쉼표 연산자는 연산자 우선순위 중에 제일 순위가 낮음

	#pragma region 구분기호로서

	int j = 1, k = 10;
	// 위에서 사용된 콤마는 구분기호 (연산자가 아님)
	// 콤마 다음에 있는 b도 int 로 

	#pragma endregion
	
	#pragma region 연산자로서

	int a = 1, b = 10;
	// 위에서 사용된 콤마는 구분기호 (쉼표 연산자가 아님)
	// 콤마 다음에 있는 b도 int 라는 구분기호 

	int x = 3;
	int y = 10;

	int z = (x++, y++);  // z = 10
	/*
		콤마는 대입 연산자 보다 우선순위가 낮음
		그런데 괄호로 묶어주었기 대입 연산자 보다 먼저 콤마부터 실행됨
		따라서 x++를 지나서 y++로 가기 때문에 x에 y++값이 저장됨
	*/

	z = x, y; // z = 4 
	/*
		콤마는 대입 연산자보다 우선순위가 낮음
		그래서 대입 연산자부터 실행됨
		-> z = x; 가 됨
		y값을 넣어주기 위해서는 
		-> z = (x, y); 로 수정해주어야 함
	*/

	#pragma endregion

	#pragma region 주의사항

	int i = 5;
	int m = 3;

	int sum = i, m; // 에러코드
	/*
		이 코드가 에러가 뜨는 이유는 무엇일까?

		위 코드에서 콤마는 연산자가 아니라 구분기호임
		-> int sum = int i; int m
		i는 sum에 저장이 되지만 m은 한 번 더 선언하는 꼴이라 에러가 남
	*/

	int o = 1, p = 10;
	int value;

	value = (++o, o + p); // value = 12;
	/*
		우선순위가 높은 것부터 실행됨
		
		현재 우선순위를 높은 순서대로 나열해보면
		++
		=
		,

		코드가 컴파일 되는 순서대로 설명해보자면
		1. ++o : o에 1을 더해줌 (o = 2)
		2. o + p : o + p = 2 + 10 = 12 (괄호로 우선순위를 높여주었기 때문에 대입 연산자보다 먼저 실행)  
		3. = : value = o + p = 12
	*/

	#pragma endregion

	return 0;
}