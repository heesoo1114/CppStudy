#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 1;
	int v = add(x, x++);

	cout << v << endl;
	// ���������� ������ �Ǹ� 3�� ���;� �����ε� 4�� ��� ��
	// ���� ������ ���ÿ� �μ��� ����ϴµ� ���������ڸ� ����ϴ� �ڵ��� ��������
	// -> ���� : �����Ϸ����� �� �Ű����� �� x�� ���� �������� ++x�� ���� �������� �򰥷� ��

	int a = 1;
	int b = 2;
	int sum = add(a, b++);

	cout << sum; 
	// �� ��Ȳ�� ���������� �����

	int z = 1;
	/*
		z = z--;
		z = z++;

		���� ���� �ڵ����� ����

		z += 1;
		z -= 1; 

		�� ��������
	*/
	return 0;
}