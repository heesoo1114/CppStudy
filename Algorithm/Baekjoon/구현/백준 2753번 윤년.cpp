#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int input;

	cin >> input;

	if (input % 4 == 0)
	{
		if (!(input % 100 == 0) || (input % 400 == 0))
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	else
	{
		cout << 0 << endl;
	}

	return 0;
}