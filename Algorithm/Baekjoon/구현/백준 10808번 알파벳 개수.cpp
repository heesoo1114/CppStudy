#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = 97; i < 123; i++)
	{
		char c = i;
		int cnt = 0;
		
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == c)
			{
				++cnt;
			}
		}

		cout << cnt << " ";
	}
}