#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string input;
	getline(cin, input);

	int cnt = 1;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			cnt++;
		}
	}

	if (input[0] == ' ')
	{
		cnt--;
	}
	if (input[input.length() - 1] == ' ')
	{
		cnt--;
	}

	cout << cnt << endl;
}