#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[11];
	arr[1] = 1; arr[2] = 2; arr[3] = 4;

	int testCaseCnt, input;
	cin >> testCaseCnt;

	for (int i = 4; i < 11; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	for (int i = 0; i < testCaseCnt; i++)
	{
		cin >> input;
		cout << arr[input] << '\n';
	}
}