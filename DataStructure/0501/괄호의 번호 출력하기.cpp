#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<int> s;
	string input;

	cin >> input;

	int cnt = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
		{
			cnt++;
			s.push(cnt);
			cout << cnt << " ";
		}
		else if (input[i] == ')')
		{
			if (s.size() == 0)
			{
				cout << "��ȣ�� ��������� �ʾҽ��ϴ�." << endl;
				return 0;
			}
			
			cout << s.top() << " ";
			s.pop();
		}
	}
}