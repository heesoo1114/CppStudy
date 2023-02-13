#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	// uintptr_t : �ּҰ� ������ ����
	cout << uintptr_t(ptr - 1) << endl; // ex. 9697600 ���
	cout << uintptr_t(ptr) << endl;		// ex. 9697604 ���
	cout << uintptr_t(ptr + 1) << endl; // ex. 9697608 ���
	cout << uintptr_t(ptr + 2) << endl;	// ex. 9697612 ���

	// int�� �����Ϳ� 1�� �����ָ� �ּڰ��� 4byte ����, 1�� ���ָ� 4byte ����
	// double�� �����Ϳ� 1�� �����ָ� �ּڰ��� 8byte ����, 1�� ���ָ� 8byte ����

	// �ּڰ��� ������ Ÿ���� ũ�⿡ ���� ���̰� ��

	int list[] = { 1, 3, 5, 7, 9 };
	int listLength = sizeof(list) / sizeof(int); // 20 / 4 = 5
	int	*lptr = list;

	// �迭 �ε���
	for (int i = 0; i < listLength; ++i)
	{
		// cout << list[i] << " " << uintptr_t(&list[i]) << endl;
		cout << *(lptr + i) << " " << uintptr_t(lptr + i) << endl;
	}

	return 0;
}