#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<long long int> v;
long long int N, M;
long long int inputN;
long long int inputM;

int FindNumber(long long int target)
{
	long long int low = 0;
	long long int high = N - 1;
	long long int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (target == v[mid])
		{
			return 1;
		}
		else if (target > v[mid])
		{
			low = mid + 1;
		}
		else if (target < v[mid])
		{
			high = mid - 1;
		}
	}
	return 0;
}

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> inputN;
		v.push_back(inputN);
	}

	sort(v.begin(), v.end());	

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> inputM;
		cout << FindNumber(inputM) << " ";
	}
}