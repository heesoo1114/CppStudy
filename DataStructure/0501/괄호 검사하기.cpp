#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;

	bool isAnswer = true;

	int cnt = 0;

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
		{
			s.push(')');
		}
		if (input[i] == '{')
		{
			s.push('}');
		}
		if (input[i] == '[')
		{
			s.push(']');
		}

		if (input[i] == ')' || input[i] == '}' || input[i] == ']')
		{
			if (s.top() == input[i])
			{
				s.pop();
			}
			else
			{
				isAnswer = false;
			}
		}
	}

	if (isAnswer)
	{
		cout << "괄호 검사 성공" << endl;
	}
	else
	{
		cout << "괄호 검사 실패" << endl;
		return 0;
	}
}