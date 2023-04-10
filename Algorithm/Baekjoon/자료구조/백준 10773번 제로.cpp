#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == 0)
		{
			s.pop();
			continue;
		}

		s.push(input);
	}

	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;
}
