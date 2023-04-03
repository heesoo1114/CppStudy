#include <iostream>
#include <algorithm>
using namespace std;

int arr[20];

void PosChange(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		if (end == (start + end) / 2)
		{
			break;
		}

		swap(arr[i], arr[end]);
		end--;
	}
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		int startPos, endPos;
		cin >> startPos >> endPos;
		PosChange(startPos - 1, endPos - 1);
	}

	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << " ";
	}
}