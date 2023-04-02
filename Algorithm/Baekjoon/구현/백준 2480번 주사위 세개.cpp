#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		int result;
		result = 10000 + (a * 1000);
		cout << result << endl;
	}
	else if (a == b || b == c || c == a)
	{
		int result;
		if (a == b)
		{
			result = 1000 + (a * 100);
		}
		else if (b == c)
		{
			result = 1000 + (b * 100);
		}
		else if (c == a)
		{
			result = 1000 + (c * 100);
		}
		cout << result << endl;
	}
	else
	{
		int result;
		result = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
		result *= 100;
		cout << result << endl;
	}
}