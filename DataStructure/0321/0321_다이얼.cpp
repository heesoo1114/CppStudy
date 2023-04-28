#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[8] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

	string input;
	cin >> input;

	int sum = 0;
	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (str[j].find(input[i]) != string::npos) // npos : 찾지 못 했을 때
			{
				sum += j + 3;
				continue;
			}
		}
	}

	cout << sum << endl;
}