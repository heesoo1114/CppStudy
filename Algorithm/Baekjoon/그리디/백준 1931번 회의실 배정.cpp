#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<pair<int, int>> v;

	int n, start, end, cnt = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		v.push_back({ end, start });
	}
	sort(v.begin(), v.end());

	int time = v[0].first;
	for (int i = 1; i < n; i++)
	{
		if (v[i].second >= time)
		{
			time = v[i].first;
			cnt++;
		}
	}

	cout << cnt << '\n';
}
