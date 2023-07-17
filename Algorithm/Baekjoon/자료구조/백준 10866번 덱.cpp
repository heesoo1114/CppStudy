#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dq;

	int cnt;
	cin >> cnt;
	
	for (int i = 1; i <= cnt; i++)
	{
		string input;
		cin >> input;

		int input2 = 0;

		if (input == "push_front")
		{
			cin >> input2;
			dq.push_front(input2);
		}
		else if (input == "push_back")
		{
			cin >> input2;
			dq.push_back(input2);
		}
		else if (input == "pop_front")
		{
			if (dq.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (input == "pop_back")
		{
			if (dq.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (input == "size")
		{
			cout << dq.size() << endl;
		}
		else if (input == "empty")
		{
			if (dq.empty())
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (input == "front")
		{
			if (dq.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << dq.front() << endl;
			}
		}
		else if (input == "back")
		{
			if (dq.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << dq.back() << endl;
			}
		}
	}
}