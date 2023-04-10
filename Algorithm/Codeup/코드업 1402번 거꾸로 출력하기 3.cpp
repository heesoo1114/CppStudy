#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// push, top, pop, size, empty
	stack<int> s;

	int n, sn;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> sn;
		s.push(sn);
	}

	for (int i = 0; i < n; i++)
	{
		cout << s.top() << " ";
		s.pop();
	}
}