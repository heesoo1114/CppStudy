#include <iostream>
#include <bitset> // bitset<nun>(x)를 사용하여 x값을 num자리의 이진수 비트로 출력하게 해줌 

using namespace std;

int main()
{
	/*
		비트단위 연산은 빠르게 계산하기 위하여 사용함
		-> 곱하기, 나누기보다 시프트 연산자가 더 빠름

		비트단위 연산자의 종류

		<< : 왼쪽 시프트 연산자
		>> : 오른쪽 시프트 연산자
		~ : 보수 연산자
		& : 비트단위 AND 
		| : 비트단위 OR
		^ : 비트단위 XOR

		비트단위 연산은 unsigned로
	*/

	#pragma region 시프트연산자

	unsigned int a = 1;

	cout << std::bitset<4>(a) << " " << (a << 1) << endl;
	// 1을 이진수로 하면 0001
	// 왼쪽 시프트 연산을 하면 왼쪽으로 한 칸 움직이게 되어 0010이 됨
	// 0010은 2
	// 왼쪽으로 1칸씩 움직인 후 빈 곳은 0으로 채움

	cout << std::bitset<4>(a << 1) << " " << (a << 1) << endl; // 0010 2 출력
	cout << std::bitset<4>(a << 2) << " " << (a << 2) << endl; // 0100 4 출력
	cout << std::bitset<4>(a << 3) << " " << (a << 3) << endl; // 1000 8 출력
	cout << std::bitset<4>(a << 4) << " " << (a << 4) << endl; // (1)0000 16 출력

	// A << B == A * 2^B

	unsigned int b = a << 1; 
	// 시프트 연산자가 대입 연산자보다 우선순위가 높아서
	// b = (a << 1)로 실행

	
	unsigned int c = 1024;

	cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl; // 0000001000000000 512 출력
	cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl; // 0000000100000000 256 출력
	cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl; // 0000000010000000 128 출력
	cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl; // 0000000001000000 64 출력
	// 오른쪽 시프트 연산은 오른쪽으로 한 칸 움직이고 빈 칸을 0으로 채움
	// A >> B == A / 2^B

	#pragma endregion

	#pragma region 보수연산자

	unsigned int f = 0b0001;

	cout << bitset<4>(~f) << endl; // 1110 출력
	// ~A = A 보수화

	#pragma endregion

	#pragma region 비트논리연산자

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;

	cout << std::bitset<4>(x & y) << endl; // 0100 출력
	x &= y; // x = x & y;
	/*
		&(AND) 

		1100
		0110
		----
		0100

		X와 Y 둘 다 true이어야 true
		X와 Y 중 하나만 true이면 false
	*/

	cout << std::bitset<4>(x | y) << endl; // 1110 출력
	x |= y; // x = x | y;
	/*
		|(OR)

		1100
		0110
		----
		1110

		X와 Y 중 하나만 true이어도 true
		X와 Y가 둘 다 false이면 false
	*/

	cout << std::bitset<4>(x ^ y) << endl; // 1010 출력
	/*
		^(XOR)

		1100
		0110
		----
		1010

		X와 Y가 다르면 true 
		X와 Y가 같으면 false
	*/

	#pragma endregion

	return 0;
}