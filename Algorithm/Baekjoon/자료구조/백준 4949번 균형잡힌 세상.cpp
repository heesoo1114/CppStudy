#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;

	while (true)
	{
		stack<char> s;
		bool isAnswer = true;

		string input;
		getline(cin, input);
		if (input == ".") break;

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '(')
			{
				s.push(')');
			}
			if (input[i] == '[')
			{
				s.push(']');
			}

			if (input[i] == ')' || input[i] == ']')
			{
				if (s.size() == 0)
				{
					isAnswer = false;
					break;
				}

				if (s.top() == input[i])
				{
					s.pop();
				}
				else
				{
					isAnswer = false;
					break;
				}
			}
		}

		if (isAnswer && s.empty())
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}