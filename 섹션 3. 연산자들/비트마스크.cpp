#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
		���� ǥ���� �� 16���� 5���� ǥ����
		16���� 2�ڸ� ���� ����
		RR : ������
		GG : �ʷϻ�
		BB : �Ķ���
		�� ǥ����
	
		0x RR GG BB

		������ 0xFF0000
		�ʷϻ� 0x00FF00
		�Ķ��� 0x0000FF
	*/

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(red_mask) << endl; // 00000000 11111111 00000000 00000000 ���
	cout << bitset<32>(green_mask) << endl; // 00000000 00000000 11111111 00000000  ���
	cout << bitset<32>(blue_mask) << endl; // 00000000 00000000 00000000 11111111 ���
	cout << bitset<32>(pixel_color) << endl; // 00000000 11011010 10100101 00100000 ���


	// blue �� �����ϱ�
	unsigned char blue = pixel_color & blue_mask; // blue = 00000000 00000000 00000000 00100000 

	cout << "blue " << bitset<8>(blue) << endl; // 00100000 ���

	// green �� ����
	unsigned char green = pixel_color & green_mask; // green = 00000000 00000000 10100101 00000000

	// 8��Ʈ�� ����ϱ� ������ 8ĭ �о���
	green = (pixel_color & green_mask) >> 8; // green = 00000000 00000000 00000000 10100101
	cout << "green " << bitset<8>(green) << endl; // 10100101 ���

	return 0;
}