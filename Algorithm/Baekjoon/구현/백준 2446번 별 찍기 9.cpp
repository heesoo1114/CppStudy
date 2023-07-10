#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		for (int j = 1; j <= N * 2; j++)
		{
			if (N - i < j && j < N + i)
			{
				cout << "*";
			}
			else if (N - i >= j)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= N * 2; j++)
		{
			if (N - i < j && j < N + i)
			{
				cout << "*";
			}
			else if (N - i >= j)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}