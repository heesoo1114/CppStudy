#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int count = 0;
	
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i < b; i++)
	{
		if (i == c || i == d)
		{
			count++;
		}
	}

	if (count == 1)
		cout << "cross" << endl;
	else
		cout << "not cross" << endl;

	return 0;
}