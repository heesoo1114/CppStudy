#include <iostream>
#include <set>
using namespace std;

bool isGroup(string str)
{
	set<char> s;
	char beforeTemp = ' ';

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == beforeTemp) continue;
		else
		{
			if (s.find(str[i]) != s.end()) return false;
			s.insert(str[i]);
			beforeTemp = str[i];
		}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt = 0;
	int n;
	cin >> n;

	string input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (isGroup(input))
		{
			cnt++;
		}
	}

	cout << cnt << "\n";
}