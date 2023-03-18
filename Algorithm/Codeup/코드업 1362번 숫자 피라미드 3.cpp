#include<iostream>
using namespace std;

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

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