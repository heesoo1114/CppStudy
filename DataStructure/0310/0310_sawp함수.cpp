#include<iostream>
using namespace std;

void hsswap(int& x, int& y) // main�� �ִ� a�� b�� ���ο� ���� x, y�� �������
{
	int temp = x;
	x = y;
	y = temp;
}

void ptswap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 2;
	int b = 4;

	cout << a << " " << b  << endl;

	hsswap(a, b);

	cout << a << " " << b << endl;

	ptswap(&a, &b);

	cout << a << " " << b << endl;
	return 0;
}