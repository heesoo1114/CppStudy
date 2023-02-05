#include <iostream>
#include <bitset> // bitset<nun>(x)�� ����Ͽ� x���� num�ڸ��� ������ ��Ʈ�� ����ϰ� ���� 

using namespace std;

int main()
{
	/*
		��Ʈ���� ������ ������ ����ϱ� ���Ͽ� �����
		-> ���ϱ�, �����⺸�� ����Ʈ �����ڰ� �� ����

		��Ʈ���� �������� ����

		<< : ���� ����Ʈ ������
		>> : ������ ����Ʈ ������
		~ : ���� ������
		& : ��Ʈ���� AND 
		| : ��Ʈ���� OR
		^ : ��Ʈ���� XOR

		��Ʈ���� ������ unsigned��
	*/

	#pragma region ����Ʈ������

	unsigned int a = 1;

	cout << std::bitset<4>(a) << " " << (a << 1) << endl;
	// 1�� �������� �ϸ� 0001
	// ���� ����Ʈ ������ �ϸ� �������� �� ĭ �����̰� �Ǿ� 0010�� ��
	// 0010�� 2
	// �������� 1ĭ�� ������ �� �� ���� 0���� ä��

	cout << std::bitset<4>(a << 1) << " " << (a << 1) << endl; // 0010 2 ���
	cout << std::bitset<4>(a << 2) << " " << (a << 2) << endl; // 0100 4 ���
	cout << std::bitset<4>(a << 3) << " " << (a << 3) << endl; // 1000 8 ���
	cout << std::bitset<4>(a << 4) << " " << (a << 4) << endl; // (1)0000 16 ���

	// A << B == A * 2^B

	unsigned int b = a << 1; 
	// ����Ʈ �����ڰ� ���� �����ں��� �켱������ ���Ƽ�
	// b = (a << 1)�� ����

	
	unsigned int c = 1024;

	cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl; // 0000001000000000 512 ���
	cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl; // 0000000100000000 256 ���
	cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl; // 0000000010000000 128 ���
	cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl; // 0000000001000000 64 ���
	// ������ ����Ʈ ������ ���������� �� ĭ �����̰� �� ĭ�� 0���� ä��
	// A >> B == A / 2^B

	#pragma endregion

	#pragma region ����������

	unsigned int f = 0b0001;

	cout << bitset<4>(~f) << endl; // 1110 ���
	// ~A = A ����ȭ

	#pragma endregion

	#pragma region ��Ʈ��������

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;

	cout << std::bitset<4>(x & y) << endl; // 0100 ���
	x &= y; // x = x & y;
	/*
		&(AND) 

		1100
		0110
		----
		0100

		X�� Y �� �� true�̾�� true
		X�� Y �� �ϳ��� true�̸� false
	*/

	cout << std::bitset<4>(x | y) << endl; // 1110 ���
	x |= y; // x = x | y;
	/*
		|(OR)

		1100
		0110
		----
		1110

		X�� Y �� �ϳ��� true�̾ true
		X�� Y�� �� �� false�̸� false
	*/

	cout << std::bitset<4>(x ^ y) << endl; // 1010 ���
	/*
		^(XOR)

		1100
		0110
		----
		1010

		X�� Y�� �ٸ��� true 
		X�� Y�� ������ false
	*/

	#pragma endregion

	return 0;
}