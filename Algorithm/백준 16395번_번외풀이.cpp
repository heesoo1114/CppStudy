#include<iostream>
#include<vector>

using namespace std;

// 백준 16395번 파스칼의 삼각형 (1차원 배열로 풀기)
int main()
{
	int n; // 행
	int k; // 열

	cin >> n >> k;

	int arr[1001] = { 1, 0 };

	for (int i = 1; i <= n; i++) // 행 반복
	{
		for (int j = 1; j <= i; j++) // 열 반복
		{
			int index = i * n + j;
			arr[index] = arr[index - n] + arr[index - n - 1];
		}
	}

	int index = n * n + k;
	cout << arr[index] << endl;

	return 0;
}