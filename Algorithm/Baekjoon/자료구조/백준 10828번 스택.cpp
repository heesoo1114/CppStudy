#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main()
{
	#pragma region FAST
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	int n;
	cin >> n;

	while (n != 0)
	{
		string input;
		cin >> input;

		if (input == "push")
		{
			int num;
			cin >> num;
			s.push(num);
		}
		else if (input == "pop")
		{
			if (s.empty())
			{
				cout << "-1" << endl;
				continue;
			}

			cout << s.top() << endl;
			s.pop();
		}
		else if (input == "size")
		{
			cout << s.size() << endl;
		}
		else if (input == "empty")
		{
			if (s.empty())
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (input == "top")
		{
			if (s.empty())
			{
				cout << "-1" << endl;
				continue;
			}

			cout << s.top() << endl;
		}

		--n;
	}
}