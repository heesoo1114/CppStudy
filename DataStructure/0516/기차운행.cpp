#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int repeat = 0;
	int input;
	int checkNum = 1;
	string answer = "";
	stack <int> s;
	cin >> repeat;
	
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		s.push(input);
		answer += 'P';
		while (!s.empty() && s.top() == checkNum)
		{
			answer += "O";
			s.pop();
			checkNum++;
		}
	}
	
	if (s.empty())
		cout << answer;
	else
		cout << "impossible";
}