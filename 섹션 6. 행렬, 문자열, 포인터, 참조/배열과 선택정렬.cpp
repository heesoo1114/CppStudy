#include <iostream>

using namespace std;

int main()
{
	const int length = 5;

	int numlist[length] = { 2, 1, 3, 5, 4 };
	
	for (int i = 0; i < length; i++)
	{
		int smallIndex = i;

		for (int j = i + 1; j < length; j++)
		{
			if (numlist[smallIndex] > numlist[j]) // ���� �迭���� �ڿ� �ִ� �迭�� ũ��
			{
				smallIndex = j; // smallIndex�� ���� ���� �迭�� ����
			}
		}

		// ���� �迭�� �ڿ� �ִ� �迭 �߿� ���� ���� �迭�� ����
		int temp = numlist[smallIndex];
		numlist[smallIndex] = numlist[i];
		numlist[i] = temp;
	}

	// ���
	for (int i = 0; i < length; i++)
	{
		cout << numlist[i] << endl;
	}

	return 0;
}