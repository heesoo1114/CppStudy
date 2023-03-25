#include<iostream>
using namespace std;

int main()
{
	int arr[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	int max = 0;

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			int sum = 0;

			for (int i = x; i < x + 3; i++)
			{
				for (int j = y; j < y + 3; j++)
				{
					sum += arr[i][j];
				}
			}

			if (max <= sum)
			{
				max = sum;
			}
		}
	}

	cout << max << endl;
}