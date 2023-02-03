#include <iostream>

using namespace std;

int main()
{
	unsigned int i = 5u; // 5 출력
	long l = 5l; // 5 출력

	/*
		8진수	0 1 2 3 4 5 6 7 8 9 10
		10진수	0 1 2 3 4 5 6 7 10 11 12 13 
		16진수	0 1 2 3 4 5 6 7 8 9 A B C D E F 10
	*/

	// 8진수
	int x = 012;
	/*
		8진수 : O
		8진수로 12
		십진수로 10
	*/

	// 16진수
	int x1 = 0xF;
	/*
		16진수 : 0x
		16진수로 F(15)
		십진수로 15
	*/

	// 2진수
	int x2 = 0b1011;
	x2 = 0b1011'1011'1011'0111; // ' 를 사용하여 가독성을 높임
	/*
		2진수 : 0b
		2진수로 1011
		십진수로 11
	*/

	return 0;
}