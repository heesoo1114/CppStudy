#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string save)
{
	bool answer = true;

	stack<string> s;
	bool isDone = false;

	string input = save;

	for (int j = 0; j < input.length(); j++)
	{
		if (input[j] == '(')
		{
			s.push("(");
		}
		else if (input[j] == ')')
		{
			if (s.size() == 0)
			{
				isDone = true;
				break;
			}
			s.pop();
		}
	}

	if (isDone) return false;

	if (s.size() == 0)
	{
		answer = true;
	}
	else
	{
		answer = false;
	}

	return answer;
}