#include <iostream>
#include <stack>
using namespace std;

int main()
{
	#pragma region FAST
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		stack<string> s;
		bool isDone = false;

		string input;
		cin >> input;

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
					cout << "NO" << endl;
					isDone = true;
					break;
				}
				s.pop();
			}
		}

		if (isDone) continue;

		if (s.size() == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
