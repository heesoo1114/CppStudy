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

		// 입력한 값까지 push
		while (cnt <= input)
		{
			s.push(cnt);
			cnt++;
			
			answer.push_back("+");
		}

		// 마지막에 push 한 값이 입력한 값과 같으면
		if (s.top() == input)
		{
			s.pop();

			answer.push_back("-");
		}
		// else문으로 들어오는 경우라면 다음 반복 때 s에 s.top()보다 더 낮은 값이 들어갈 수 밖에 없게 된다.
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