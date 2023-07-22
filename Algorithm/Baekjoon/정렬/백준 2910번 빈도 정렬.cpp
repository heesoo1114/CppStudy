#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> index;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return index[a.first] < index[b.first];
	return a.second > b.second;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	unordered_map<int, int> m;

	int c, input;
	int n;
	cin >> n >> c;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		m[input]++;

		if (index.find(input) == index.end())
		{
			index[input] = i;
		}
	}

	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].second; j++)
		{
			cout << v[i].first << " ";
		}
	}
}