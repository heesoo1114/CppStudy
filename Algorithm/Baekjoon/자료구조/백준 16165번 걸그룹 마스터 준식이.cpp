#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, set<string>> member;
	map<string, string> group;

	int N, M;
	cin >> N >> M;

	int groupCnt;
	string groupName, name;
	for (int i = 0; i < N; i++)
	{
		cin >> groupName >> groupCnt;

		for (int j = 0; j < groupCnt; j++)
		{
			cin >> name;
			member[groupName].insert(name);
			group[name] = groupName;
		}
	}

	string input;
	int kindQuiz;
	for (int i = 0; i < M; i++)
	{
		cin >> input >> kindQuiz;

		if (kindQuiz)
		{
			cout << group[input] << endl;
		}
		else
		{
			for (set<string>::iterator iter = member[input].begin(); iter != member[input].end(); iter++)
			{
				cout << *iter << endl;
			}
		}
	}

}