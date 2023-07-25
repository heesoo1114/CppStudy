#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		int arr[3];
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];

			if (arr[i] == 0)
			{
				return 0;
			}
		}

		sort(arr, arr + 3);

		int temp = pow(arr[0], 2) + pow(arr[1], 2);
		if (temp == pow(arr[2], 2))
		{
			cout << "right" << "\n";
		}
		else
		{
			cout << "wrong" << "\n";
		}
	}
}