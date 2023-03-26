#include<iostream>
using namespace std;

int main()
{
	long long a, b, count;
	cin >> a >> b;

	if (a == b)
	{
		cout << "0" << endl;
		return 0;
	}
	else if (a > b)
	{
		swap(a, b);
	}

	count = b - a - 1;

	cout << b - a - 1 << "\n";
	for (long long i = a + 1; i < b; i++)
	{
		cout << i << " ";
	}
}