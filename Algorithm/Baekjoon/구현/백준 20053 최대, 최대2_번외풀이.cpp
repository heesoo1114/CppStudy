#include<iostream>
using namespace std;

int main()
{
#pragma region ����ӵ�UP
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#pragma endregion

	int caseCount;
	cin >> caseCount;

	while (caseCount > 0)
	{
		int indexCount;
		cin >> indexCount;

		int *arr = new int[indexCount];

		int min = 1000000;	// ���� ū ��
		int max = -1000000; // ���� ���� ��

		for (int j = 0; j < indexCount; j++)
		{
			cin >> arr[j];

			if (max <= arr[j]) max = arr[j];
			if (min >= arr[j]) min = arr[j];
		}

		cout << min << " " << max << endl;

		caseCount--;

		delete[] arr;
	}

	return 0;
}