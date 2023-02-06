#include <iostream>

using namespace std;

void doSomething()
{
	static int a = 1; 
	// a가 정적 변수로 선언되지 않았다면 main에서 doSomething을 호출할 때마다 a를 1로 초기화 시켜서 2가 출력됨
	
	++a;
	cout << a << endl;
}

int main()
{
	doSomething(); // 2 출력 (처음 doSomething을 호출, 정적 변수 a의 초기화가 처음이자 마지막으로 이루어짐) 
	doSomething(); // 3 출력
	doSomething(); // 4 출력
	doSomething(); // 5 출력

	/*
		<정적(static) 변수>

		- 초기화는 맨 처음 호출될 때 한 번만 함
		- 초기화는 필수
		- 정적 변수의 값은 메모리에 유지됨
		- 중괄호를 기준으로 범위 내에서만 사용 가능 (지역 변수)
	*/
}