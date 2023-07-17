#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<int> s;

	for (int i = 0; i < 8; i++)
	{
		int num;
		cin >> num;

		if (s.empty())
		{
			s.push(num);
			continue;
		}

		if (num == s.top() + 1 || num == s.top() - 1)
		{
			s.push(num);
		}

	}

	if (s.size() == 8)
	{
		if (s.top() == 1)
		{
			cout << "descending" << endl;
		}
		else if (s.top() == 8)
		{
			cout << "ascending" << endl;
		}
		else
		{
			cout << "mixed" << endl;
		}
	}
	else
	{
		cout << "mixed" << endl;
	}
}