#include <iostream>

using namespace std;

int main()
{
	// ���ϱ�, ����, ������, ������, ����

	int x = 4;
	int y = 2;

	int sum;

	// ���ϱ�ex
	sum = x + y; // sum = 6
	x += y; // = -> x = x + y; 

	// ����ex
	sum = x - y; // sum = 2
	x -= y; // = > x = x - y;

	// ���ϱ�ex
	sum = x * y; // sum = 8
	x *= y; // = -> x = x * y;

	// ������ex
	sum = x / y; // sum = 2
	x /= y; // = -> x = x / y;

	// ������ex
	int x1 = 5;
	int y1 = 3;
	sum = x % y; // sum = 2
	x %= y; // = -> x = x * y;


	return 0;
}