#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	int temp = 0;

	string input;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		// ����
		if (input[i] >= '0' && input[i] <= '9')
		{
			temp = temp * 10 + (input[i] - '0');
		}
		// ����
		else if (input[i] == ' ')
		{
			if (temp != 0)
			{
				s.push(temp);
				temp = 0;
			}
		}
		// ������
		else
		{
			int x = s.top();
			s.pop();
			int y = s.top();
			s.pop();

			if (input[i] == '+')
			{
				s.push(x + y);
			}
			else if (input[i] == '-')
			{
				s.push(y - x);
			}
			else if (input[i] == '*')
			{
				s.push(x * y);
			}
		}
	}

	cout << s.top() << endl;
}