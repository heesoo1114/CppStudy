#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int caseCnt;
	cin >> caseCnt;

	for (int i = 0; i < caseCnt; i++)
	{
		string input;
		cin >> input;

		int score = 0;
		int combo = 1;

		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == 'O')
			{
				score += combo;
				combo++;
			}
			else if (input[j] == 'X')
			{
				combo = 1;
			}
		}

		cout << score << endl;
	}
}