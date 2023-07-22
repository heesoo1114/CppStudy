#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int answer = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != input[i + 1])
		{
			answer++;
		}
	}

	if (answer == 0)
	{
		cout << answer << endl;
	}
	else
	{
		cout << answer / 2 << endl;
	}
}