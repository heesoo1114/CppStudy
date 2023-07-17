#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (input == 1)
		{
			int num;
			cin >> num;
			s.push(num);
		}
		else if (input == 2)
		{
			if (s.empty())
			{
				cout << "-1" << "\n";
				continue;
			}

			cout << s.top() << "\n";
			s.pop();
		}
		else if (input == 3)
		{
			cout << s.size() << "\n";
		}
		else if (input == 4)
		{
			if (s.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (input == 5)
		{
			if (s.empty())
			{
				cout << "-1" << "\n";
				continue;
			}

			cout << s.top() << "\n";
		}
	}
}