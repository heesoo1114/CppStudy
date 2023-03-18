#include<iostream>
using namespace std;

int main()
{
	int max = 0;

	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;

		int area = x * y;
		if (max < area)
		{
			max = area;
		}
	}

	cout << max << endl;

	return 0;
}