#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
		색을 표현할 때 16진수 5개로 표현함
		16진수 2자리 수로 각각
		RR : 빨간색
		GG : 초록색
		BB : 파란색
		을 표현함
	
		0x RR GG BB

		빨간색 0xFF0000
		초록색 0x00FF00
		파란색 0x0000FF
	*/

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(red_mask) << endl; // 00000000 11111111 00000000 00000000 출력
	cout << bitset<32>(green_mask) << endl; // 00000000 00000000 11111111 00000000  출력
	cout << bitset<32>(blue_mask) << endl; // 00000000 00000000 00000000 11111111 출력
	cout << bitset<32>(pixel_color) << endl; // 00000000 11011010 10100101 00100000 출력


	// blue 값 추출하기
	unsigned char blue = pixel_color & blue_mask; // blue = 00000000 00000000 00000000 00100000 

	cout << "blue " << bitset<8>(blue) << endl; // 00100000 출력

	// green 값 추출
	unsigned char green = pixel_color & green_mask; // green = 00000000 00000000 10100101 00000000

	// 8비트만 출력하기 때문에 8칸 밀어줌
	green = (pixel_color & green_mask) >> 8; // green = 00000000 00000000 00000000 10100101
	cout << "green " << bitset<8>(green) << endl; // 10100101 출력

	return 0;
}