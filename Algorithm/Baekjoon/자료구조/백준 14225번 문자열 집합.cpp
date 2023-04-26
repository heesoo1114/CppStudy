#include <iostream>
#include <set>
using namespace std;

set<string> s;
string input;
int cnt = 0;
int n, m;

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> input;

		if (s.find(input) != s.end())
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}
