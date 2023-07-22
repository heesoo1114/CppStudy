#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<int> s;
	s.push(0);

	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		while (!s.empty())
		{
			if (s.top() > input) break;
			s.pop();
		}
		s.push(input);
	}

	cout << s.size() << endl;
}