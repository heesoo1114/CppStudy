#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100000]{ 0 };
	int N, M, inputA, inputB, sum;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> inputA;
		arr[i] = arr[i - 1] + inputA;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> inputA >> inputB;
		sum = arr[inputB] - arr[inputA - 1];
		cout << sum << "\n";
	}
}