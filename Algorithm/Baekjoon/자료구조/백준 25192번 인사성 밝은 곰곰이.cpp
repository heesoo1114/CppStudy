#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<string> s;

	int cnt;
	cin >> cnt;

	int answer = 0;

	for (int i = 0; i < cnt; i++)
	{
		string input;
		cin >> input;

		if (input == "ENTER")
		{
			answer += s.size();
			s.clear();
		}
		else
		{
			if (s.find(input) == s.end())
			{
				s.insert(input);
			}
		}
	}

	cout << answer + s.size() << endl;
}