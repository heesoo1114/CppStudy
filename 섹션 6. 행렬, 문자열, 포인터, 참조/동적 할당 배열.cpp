#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;  

	int* array = new int[length] { 1, 2, 3}; // ���� �Ҵ翡���� �迭�� ũ�⸦ �� �������־�� ��
	// �Էµ� length�� ������ ������ ���̿� ���� ����� �޶���
	// length > ������ ���� �̸� �Էµ� ���ҵ��� ���� �� ���� �κе��� 0���� ��µ�
	// length < ������ ���� �̸� length ��ŭ�� ������ ���� �κ��� ��µ��� ����

	for (int i = 0; i < length; ++i)
	{
		cout << *(array + i) << endl; // *(array + i) = array[i]
	}

	delete[] array; 

	return 0;
}