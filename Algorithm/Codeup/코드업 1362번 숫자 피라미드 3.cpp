#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int top = 0;
	for (int i = n; i > 0; i--) top += i;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << top << " ";
			--top;
		}
		cout << endl;
	}

	return 0;
}