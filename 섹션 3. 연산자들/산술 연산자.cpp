#include <iostream>

using namespace std;

int main()
{
	// ´õÇÏ±â, °ö¼À, ³ª´©±â, ³ª¸ÓÁö, »©±â

	int x = 4;
	int y = 2;

	int sum;

	// ´õÇÏ±âex
	sum = x + y; // sum = 6
	x += y; // = -> x = x + y; 

	// »©±âex
	sum = x - y; // sum = 2
	x -= y; // = > x = x - y;

	// °öÇÏ±âex
	sum = x * y; // sum = 8
	x *= y; // = -> x = x * y;

	// ³ª´©±âex
	sum = x / y; // sum = 2
	x /= y; // = -> x = x / y;

	// ³ª¸ÓÁöex
	int x1 = 5;
	int y1 = 3;
	sum = x % y; // sum = 2
	x %= y; // = -> x = x * y;


	return 0;
}