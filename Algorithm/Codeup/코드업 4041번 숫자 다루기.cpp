#include<iostream>
using namespace std;

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	int input;
	int sum = 0; // ��
	int rev = 0; // ������ ��

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