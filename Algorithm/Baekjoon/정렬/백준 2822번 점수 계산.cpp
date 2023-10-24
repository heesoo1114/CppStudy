#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b)
{
	return a.first > b.first;
}

int main()
{
	// num, index
	vector<pair<int, int>> v;
	vector<int> v2;

	int sum = 0;

	int input;
	for (int i = 1; i < 9; i++)
	{
		cin >> input;
		v.push_back({ input, i });
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < 5; i++)
	{
		sum += v[i].first;
		v2.push_back(v[i].second);
	}
	sort(v2.begin(), v2.end());

	cout << sum << '\n';
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ' ';
	}
}