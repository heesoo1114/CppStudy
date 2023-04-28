#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int input;
	float average = 0;
	int arr[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> input;
			arr[i][j] = input;
			average += input;
		}

		average = round(average / float(9));
		int min = 101;
		int nearNum = 0;

		for (int j = 0; j < 9; j++)
		{
			float temp = abs(average - arr[i][j]);

			if (min > temp)
			{
				min = temp;
				nearNum = arr[i][j];
			}
		}

		cout << average << " " << nearNum << endl;
	}
}

