#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[1000001];

	int input;
	cin >> input;

	arr[1] = 0;
	for (int i = 2; i <= input; i++)
	{
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0)
		{
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	cout << arr[input] << '\n';
}

/*
i = 1
-> arr[1] = 0;

i = 2
-> arr[2] = 1;

i = 3
arr[3] = arr[2] + 1 = 1 + 1 = 2;
arr[3] = arr[3 / 3] + 1 = 1;
-> arr[3] = 1;

i = 4
arr[4] = arr[4 - 1] + 1 = 1 + 1 = 2;
arr[4] = arr[4 / 2] + 1 = 1 + 1 = 2;
-> arr[4] = 2;

i = 5
arr[5] = arr[5 - 1] + 1 = 2 + 1 = 3;
-> arr[5] = 3;

i = 6
arr[6] = arr[6 - 1] + 1 = 3 + 1 = 4;
arr[6] = arr[6 / 3] + 1 = 1 + 1 = 2;
arr[6] = arr[6 / 2] + 1 = 1 + 1 = 2;
-> arr[6] = 2;

i = 7
arr[7] = arr[7 - 1] + 1 = 2 + 1 = 3;
-> arr[7] = 3;

i = 8
arr[8] = arr[8 - 1] + 1 = 3 + 1 = 4;
arr[8] = arr[8 / 2] + 1 = 2 + 1 = 3;
-> arr[8] = 3;

i = 9
arr[9] = arr[9 - 1] + 1 = 4;
arr[9] = arr[9 / 3] + 1 = 2;
-> arr[9] = 2;

i = 10
arr[10] = arr[10 - 1] + 1 = 3;
arr[10] = arr[10 / 2] + 1 = 4;
-> arr[10] = 3;
*/