#include <iostream>
#include <queue>
using namespace std;

int main()
{
#pragma region FAST
	cin.tie(NULL);
	cin.sync_with_stdio(false);
#pragma endregion

	queue<int> q;

	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++)
	{
		string input;
		cin >> input;

		if (input == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (input == "pop")
		{
			if (q.empty())
			{
				cout << "-1" << '\n';
			}
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (input == "size")
		{
			cout << q.size() << '\n';
		}
		else if (input == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (input == "front")
		{
			if (q.empty())
			{
				cout << "-1" << '\n';
			}
			else
			{
				cout << q.front() << '\n';
			}
		}
		else if (input == "back")
		{
			if (q.empty())
			{
				cout << "-1" << '\n';
			}
			else
			{
				cout << q.back() << '\n';
			}
		}
	}
}
