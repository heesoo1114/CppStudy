#include<iostream>
using namespace std;

int main()
{
	int arr[2000];
	int companyCount;
	cin >> companyCount;

	for (int i = 0; i < companyCount; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < companyCount; i++)
	{
		int count = 1;

		for (int j = 0; j < companyCount; j++)
		{
			if (arr[i] < arr[j])
			{
				count++;
			}
		}

		cout << count << endl;
	}

	return 0;
}