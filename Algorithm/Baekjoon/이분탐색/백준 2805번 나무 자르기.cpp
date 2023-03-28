#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	#pragma region FAST
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	#pragma endregion
	
	long long int result = 0;

	long long int n, m;
	cin >> n >> m;

	long long int* arr = new long long int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	long long int low = 0;
	long long int high = *max_element(&arr[0], &arr[n - 1]);
	long long int mid;
	long long int total = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		total = 0;

		for (int i = 0; i < n; i++)
		{
			if (arr[i] >= mid)
			{
				total += arr[i] - mid; 
				// total에 나무를 잘라서 남은 윗부분을 더 해줌
			}
		}
		
		if (total < m) // 덜 자름 
		{
			high = mid - 1;
		}
		else // 충분히 자름
		{
			low = mid + 1;
			result = mid;
		}
	}

	cout << result << endl;

	delete[] arr;
}