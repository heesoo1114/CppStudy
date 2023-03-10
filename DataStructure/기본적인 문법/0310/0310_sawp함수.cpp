#include<iostream>
using namespace std;

void hsswap(int& x, int& y) // main에 있는 a와 b의 새로운 별명 x, y를 만들어줌
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