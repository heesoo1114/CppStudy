#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int input;
	int cnt = 0;

	stack<int> s;

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> input;

		while (!s.empty() && input >= s.top())
		{
			s.pop();
		}

		s.push(input);

		cnt += s.size() - 1;
	}

	cout << cnt << endl;
}