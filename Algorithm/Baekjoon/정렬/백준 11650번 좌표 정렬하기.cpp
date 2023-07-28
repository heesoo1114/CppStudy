#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}

	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>> v;

	int n;
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}