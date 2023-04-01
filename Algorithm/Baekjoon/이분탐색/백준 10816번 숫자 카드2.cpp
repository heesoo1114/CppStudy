#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
int input;
vector<int> v;

int lCheck(int input)
{
	int low = 0;
	int high = N;
	int mid;

	while (low < high)
	{
		mid = (low + high) / 2;

		if (input <= v[mid])
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}
	
	return low;
}

int rCheck(int input)
{
	int low = 0;
	int high = N;
	int mid;

	while (low < high)
	{
		mid = (low + high) / 2;

		if (input < v[mid])
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}

	return low;
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
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < M; i++)
	{
		cout << v[i] << " ";
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> input;
		cout << rCheck(input) - lCheck(input) << " ";
	}
}