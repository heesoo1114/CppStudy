#include <iostream>

using namespace std;

int main()
{
	// sizeof���� ��µǴ� ���� ������ ���� : byte

	float y;
	cout << sizeof(float) << endl; // 4 ��� (4byte)
	cout << sizeof(y) << endl; // 4 ��� (4byte)
	cout << sizeof y << endl; // 4��� (4byte)

	/*
		sizeof�� �������� ����
		
		- ǥ�ؿ��� �����ڶ�� ������
		- �������� �Է��� �� sizeof y �� �ص� ������ ����
	*/

	return 0;
}