#include <iostream>

using namespace std;

int main()
{
	// conditional operator 
	// c, c++에 조건부 연산자에 삼항 연산자가 하나 밖에 없음
	// 삼항 연산자는 상수를 사용할 수 있음

	bool onSale = true;
	int price = 0;

	price = (onSale == true) ? 10 : 100;
	// onSale이 true이기 때문에 price에 10 넣어줌

	/*
		조건식 ? A : B
		
		조건식이 true이면 A, false이면 B
		A와 B는 데이터 타입을 맞추는 것이 좋음
	*/

	cout << (x % 2 == 0) ? "even" : "odd" << endl; // 에러코드
	// 조건 연산자가 시프트 왼쪽 연산자(<<) 보다 우선순위가 낮음
	// 그래서 cout << (x % 2 == 0) 꼴이 되어버리기 때문에 에러가 발생

	return 0;
}