#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int arr[1001];
	int n, input, sum, temp = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	sort(arr, arr + n);

	sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		arr[i] += arr[i - 1];
		sum += arr[i];
	}

	cout << sum << endl;
}
