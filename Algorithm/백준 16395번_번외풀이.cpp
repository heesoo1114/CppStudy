#include<iostream>
#include<vector>

using namespace std;

// ���� 16395�� �Ľ�Į�� �ﰢ�� (1���� �迭�� Ǯ��)
int main()
{
	int n = 10; // ��

	int arr[1001] = { 1, 0 };

	for (int i = 1; i <= n; i++) // �� �ݺ�
	{
		for (int j = 1; j <= i; j++) // �� �ݺ�
		{
			int index = i * n + j;
			arr[index] = arr[index - 10] + arr[index - 11];
			cout << arr[index] << '\t';
		}
		cout << endl;
	}

	return 0;
}