#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int index[11] = {0};

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 100; i++) arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
	{
		int index1 = rand() % 100;
		int index2 = rand() % 10;

		swap(arr[index1], arr[index2]);
	}

	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";

		if (max <= arr[i])
		{
			max = arr[i];
		}
	}

	cout << "\n" << "�ִ밪 : " << max << endl;
}