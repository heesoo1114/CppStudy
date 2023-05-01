#include <iostream>
using namespace std;

int main()
{
	int min = 1000000;
	int max = -1000000;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		if (min > input)
		{
			min = input;
		}

		if (max < input)
		{
			max = input;
		}
	}
	cout << min << " " << max << endl;
}
