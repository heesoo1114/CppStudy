#include<iostream>
#include<deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	deque<int> dq;

	int cnt;
	cin >> cnt;

	for (int i = 1; i <= cnt; i++)
	{
		int input, input2 = 0;
		cin >> input;

		if (input == 1)
		{
			cin >> input2;
			dq.push_front(input2);
		}
		else if (input == 2)
		{
			cin >> input2;
			dq.push_back(input2);
		}
		else if (input == 3)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (input == 4)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (input == 5)
		{
			cout << dq.size() << "\n";
		}
		else if (input == 6)
		{
			if (dq.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (input == 7)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
			}
		}
		else if (input == 8)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
			}
		}
	}
}