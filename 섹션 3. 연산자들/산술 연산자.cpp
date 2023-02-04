#include <iostream>

using namespace std;

int main()
{
	// 전부 대입 연산자 사용

	int x = 4;
	int y = 2;

	int sum;

	// 더하기ex
	sum = x + y; // sum = 6
	x += y; // = -> x = x + y; 

	// 빼기ex
	sum = x - y; // sum = 2
	x -= y; // = > x = x - y;

	// 곱하기ex
	sum = x * y; // sum = 8
	x *= y; // = -> x = x * y;

	// 나누기ex
	sum = x / y; // sum = 2
	x /= y; // = -> x = x / y;

	// 나머지ex
	int x1 = 5;
	int y1 = 3;
	sum = x % y; // sum = 2
	x %= y; // = -> x = x * y;


	return 0;
}