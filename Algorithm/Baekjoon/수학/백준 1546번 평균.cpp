#include <iostream>
using namespace std;

int main()
{
	double result = 0;
	int sum = 0;
	int max = -1;
	int nCount;
	cin >> nCount;

	for (int i = 0; i < nCount; i++)
	{
		int input;
		cin >> input;

		sum += input;
		
		if (max < input)
		{
			max = input;
		}
	}

	result = (sum * 100.0) / max / nCount;

	cout << fixed;
	cout.precision(9);
	cout << result << endl;																																			 
}
