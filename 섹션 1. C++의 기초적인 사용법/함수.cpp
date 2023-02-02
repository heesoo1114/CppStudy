using namespace std;
#include <iostream>

// 함수 안에서 함수를 정의할 수 없다.

int multiplyTwoNumbers(int a, int b) // a = 1, b = 2로 초기화
{
	int sum = a * b;

	return sum;
}

void printHelloWorld()
{
	cout << "HelloWorld" << endl;

	return; 

	/*
		return을 만나면 바로 반환을 해서 main으로 돌아감
		이 함수를 실행시켰을 때 HelloWorld만 출력이 되고
		아래 줄에 있는 HelloWorld Again은 출력되지 않는다.
	*/

	cout << "HelloWorld Again" << endl;
}

int main()
{
	cout << multiplyTwoNumbers(1, 2) << endl;
	//                         인수

	printHelloWorld();

	return 0;
}