#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[230];

	for (int i = 0; i < 14; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 1; i <= 14; i++) // Ãþ
	{
		for (int j = 0; j < 14; j++) // È£
		{
			if (j == 0) arr[(i * 14) + j] = 1;
			else
			{
				arr[(i * 14) + j] = arr[(i * 14) + (j - 1)] + arr[((i - 1) * 14) + j];
			}
		}
	}

	int t, k, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		cout << arr[(k * 14) + (n - 1)] << " \n";
	}
}
