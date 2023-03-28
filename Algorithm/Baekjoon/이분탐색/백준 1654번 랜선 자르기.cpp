#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	#pragma region FAST
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#pragma endregion

	long long int MAX = 0;
	long long int result = 0;
	
	int K, N;
	cin >> K >> N;

	long long int* arr = new long long int[K];

	for (int i = 0; i < K; i++)
	{
		cin >> arr[i];
		if (MAX < arr[i])
		{
			MAX = arr[i];
		}
	}

	long long int low = 1;
	long long int high = MAX;
	long long int mid;
	long long int count;

	while (low <= high)
	{
		mid = (low + high) / 2; // 랜선 분할 단위
		count = 0;				// 잘린 랜선 개수

		for (int i = 0; i < K; i++)
		{
			count += arr[i] / mid; 
		}

		if (count >= N) // 더 많이 자름
		{
			low = mid + 1;
			if (result < mid)
			{
				result = mid;
			}
		}
		else // 덜 자름
		{
			high = mid - 1;
		}
	}

	cout << result << endl;

	delete[] arr;
}