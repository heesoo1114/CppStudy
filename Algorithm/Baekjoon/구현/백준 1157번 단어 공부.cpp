#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<char, int> m;

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		char temp = ' ';
		temp = tolower(input[i]);
		m[temp]++;
	}

	int max = 0;
	string answer;
	for (auto iter : m)
	{
		if (max < iter.second)
		{
			max = iter.second;
			answer = iter.first;
		}
	}

	int cnt = 0;
	for (auto iter : m)
	{
		if (max == iter.second)
		{
			cnt++;
		}
	}

	if (cnt > 1)
	{
		cout << "?" << endl;
	}
	else
	{
		char ch = toupper(answer.front());
		cout << ch << endl;
	}
}