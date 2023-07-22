#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string input;
	while (true)
	{
		cin >> input;

		if (stoi(input) == 0)
		{
			break;
		}

		string temp = input;
		reverse(temp.begin(), temp.end());

		if (temp == input)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}