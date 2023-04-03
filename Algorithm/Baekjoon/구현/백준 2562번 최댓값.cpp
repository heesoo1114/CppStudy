#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int maxIndex = 0;

	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			maxIndex = i + 1;
		}
	}

	cout << max << endl;
	cout << maxIndex << endl;
}