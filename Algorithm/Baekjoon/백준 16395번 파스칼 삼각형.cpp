#include<iostream>
#include<vector>

using namespace std;

// ���� 16395�� �Ľ�Į�� �ﰢ�� (2���� �迭�� Ǯ��)
int main()
{
	int n; // ��
	int k; // ��

	cin >> n >> k;

	int arr[31][31] = { 1 };

	for (int i = 1; i <= n; i++) // �� �ݺ�
	{
		for (int j = 1; j <= i; j++) // �� �ݺ�
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			// �ڽ��� �� ���ҿ� �ڽ��� �� ������ ���� ���Ҹ� ���ؼ� ����
		}
	}

	cout << arr[n][k] << endl;

	return 0;
}

/*
	1
	1     1
	1     2     1
	1     3     3     1
	1     4     6     4     1
	1     5		10    10    5     1
*/