#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

map<string, int> index;

bool cmp(string a, string b)
{
	if (a.length() > b.length())
	{
		return false;
	}
	else if (a.length() == b.length())
	{
		if (index[a] > index[b])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<string> s;
	set<string>::iterator iterS;

	string input;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}

	int idx = 1;
	for (iterS = s.begin(); iterS != s.end(); iterS++)
	{
		index[*iterS] = idx;
		idx++;
	}

	vector<string> v(s.begin(), s.end());
	vector<string>::iterator iterV;

	sort(v.begin(), v.end(), cmp);

	for (iterV = v.begin(); iterV != v.end(); iterV++)
	{
		cout << *iterV << endl;
	}

}