#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, bool> m;
	m["ChongChong"] = true;

	int caseCnt;
	cin >> caseCnt;

	string a, b;
	for (int i = 0; i < caseCnt; i++)
	{
		cin >> a >> b;

		if (m[a] || m[b])
		{
			m[a] = true;
			m[b] = true;
		}
	}

	int cnt = 0;
	for (auto iter : m)
	{
		if (iter.second)
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}