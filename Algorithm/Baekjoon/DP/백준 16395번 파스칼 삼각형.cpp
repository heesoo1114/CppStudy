#include<iostream>
#include<vector>

using namespace std;

// 백준 16395번 파스칼의 삼각형 (2차원 배열로 풀기)
int main()
{
	int n; // 행
	int k; // 열

	cin >> n >> k;

	int arr[31][31] = { 1 };

	for (int i = 1; i <= n; i++) // 행 반복
	{
		for (int j = 1; j <= i; j++) // 열 반복
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			// 자신의 위 원소와 자신의 위 원소의 왼쪽 원소를 더해서 저장
		}
	}

	cout << arr[n][k] << endl;

	return 0;
}

/*
	1
	1     1
	1     2     1
	1     3     3     1
	1     4     6     4     1
	1     5		10    10    5     1
*/