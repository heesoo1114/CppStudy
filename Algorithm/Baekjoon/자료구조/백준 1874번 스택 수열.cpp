#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<int> s;
	vector<string> answer;

	int n, cnt = 1;
	cin >> n;
	
	s.push(0);

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		// �Է��� ������ push
		while (cnt <= input)
		{
			s.push(cnt);
			cnt++;
			
			answer.push_back("+");
		}

		// �������� push �� ���� �Է��� ���� ������
		if (s.top() == input)
		{
			s.pop();

			answer.push_back("-");
		}
		// else������ ������ ����� ���� �ݺ� �� s�� s.top()���� �� ���� ���� �� �� �ۿ� ���� �ȴ�.
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}
}