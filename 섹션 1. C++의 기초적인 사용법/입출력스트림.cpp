using namespace std;
#include <iostream>

int main()
{
	#pragma region ���

	string myName = "YoonHeesoo";

	cout << "My name is " << myName << endl;
	// My name is YoonHeesoo ���

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;
	/*	abc     def ���
		ab      cdef ���

		\t : ��, ���� ���� �� ������ ������ ��� ����
	*/

	cout << "abc\n" << "def" << endl;
	/*
		abc
		def ���

		\n : �ٹٲ� (endl�� ����)
	*/

	cout << "\a" << endl;
	// \a : ����� �Ҹ� ���

	#pragma endregion

	#pragma region �Է�

	int x = 1;
	cin >> x;
	// �Է��� ���� x�� ����
	
	cout << x << endl;

	#pragma endregion

	return 0;
}
