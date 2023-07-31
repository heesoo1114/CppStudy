#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<int> s;

	double cnt;
	cin >> cnt;

	int input;
	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " ";
	}
}