#include <iostream>
// #include <cstdint> c++11 ���ĺ��� ��� ����

using namespace std;

int main()
{
	std::int16_t i(5);
	// int16_t: ������ Ÿ���� 16bit, �� 2 byte ������ Ÿ���� int �� �ٲ���

	std::int8_t myint = 65;
	cout << myint << endl;  // A ���
	/*
		int8_t : ������ Ÿ���� 8bit, �� 1byte ������ Ÿ���� int�� �ٲ���

		+ 8bit ¥�� int�� signed char
	*/
	
	std::int_fast8_t fi(5);
	// int_fast8_t : ������ Ÿ���� 8bit �� ���� ����(fast) ������ Ÿ������ �ٲ���
	
	std::int_least64_t fl(5);
	// int_least64_t : ������ Ÿ���� �ּ� 64bit�� ���� ������ Ÿ������ �ٲ���
	
	return 0;
}