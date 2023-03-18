#include<iostream>
using namespace std;

int main()
{
	int input;
	int sum = 0; // 합
	int rev = 0; // 뒤집은 수

	cin >> input;

	while (input != 0)
	{
		sum += input % 10;

		rev = rev * 10 + input % 10;

		input /= 10;
	}

	cout << rev << endl;
	cout << sum << endl;

	return 0;
}