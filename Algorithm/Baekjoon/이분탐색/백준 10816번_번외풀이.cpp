#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long int N, M;
long long int input;
vector<long long int> v;

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
		cout << upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input) << " ";
	}

}