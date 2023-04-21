#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;

	string reverse;

	for (int i = input.length() - 1; i >= 0; i--)
	{
		reverse.push_back(input[i]);
	}

	if (input == reverse)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}
