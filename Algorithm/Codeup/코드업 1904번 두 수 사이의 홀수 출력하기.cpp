#include<iostream>
using namespace std;

int odd(int n, int max	)
{
	if (n > max)
	{
		return 0;
	}

	if (n % 2 == 1)
	{
		cout << n << " ";
	}

	return odd(n + 1, max);
}

int main()
{
	int a, b;
	cin >> a >> b;
	
	odd(a, b);
}