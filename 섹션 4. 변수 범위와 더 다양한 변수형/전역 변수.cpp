#include <iostream>

using namespace std;

int value = 123; // ���� ���� value ����

int main()
{
	/*
		<���� ����> 
		- main �Լ� �ۿ��� ����� ����
		- � { } �ȿ����� �ͼӵ����� ����
		- ���α׷��� ������ �� ����� (���� �Ⱓ ����)
		- ���� ���� ���� ���� ����

		<���� ������ ����>
		static �������� : �ش� cpp ���� �������� ��� ����
		extern ���� �������� : �ٸ� cpp ���Ͽ����� ����� �����԰� ���ÿ� �޸𸮵� ������
	*/

	cout << value << endl; // 123 ���

	int value = 1;

	cout << value << endl; // 1 ���
	cout << ::value << endl; // 123 ���

	return 0;
}