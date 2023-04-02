#include <iostream>
using namespace std;

int main()
{
	int min = 100;
	int sum = 0;
	
	for (int i = 0; i < 7; i++)
	{
		int input;
		cin >> input;

		if (input % 2 == 1)
		{
			sum += input;

			if (input < min)
			{
				min = input;
			}
		}
	}

	if (sum != 0)
	{
		cout << sum << endl;
		cout << min << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
}