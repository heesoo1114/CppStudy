#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arrA[11];
	int arrB[11];

	int a, b;
	a = b = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arrA[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> arrB[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (arrA[i] > arrB[i])
		{
			a++;
		}
		else if (arrA[i] < arrB[i])
		{
			b++;
		}
	}

	if (a > b)
	{
		cout << "A" << endl;
	}
	else if (a < b)
	{
		cout << "B" << endl;
	}
	else
	{
		cout << "D" << endl;
	}
}