#include<iostream>
#include<vector>

using namespace std;

// 백준 16395번 파스칼의 삼각형 (1차원 배열로 풀기)
int main()
{
	int n = 10; // 행

	int arr[1001] = { 1, 0 };

	for (int i = 1; i <= n; i++) // 행 반복
	{
		for (int j = 1; j <= i; j++) // 열 반복
		{
			int index = i * n + j;
			arr[index] = arr[index - 10] + arr[index - 11];
			cout << arr[index] << '\t';
		}
		cout << endl;
	}

	return 0;
}