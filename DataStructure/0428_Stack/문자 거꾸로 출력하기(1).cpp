#include <iostream>;
#include <string>;
#include <stack>;

using namespace std;

int main()
{
	stack<char> s;

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		s.push(input[i]);
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}