#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// ���� �ӵ� UP
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a[28];
	int b[30] = { 0, };

	// �Է�
	for (int i = 0; i < 28; i++) cin >> a[i];

	// ����
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (i + 1 == a[j])
			{
				b[i] = a[j];
			}
		}
	}

	// ���
	for (int i = 0; i < 30; i++)
	{
		if (b[i] == 0)
		{
			cout << i + 1 << endl;
		}
	}

	return 0;
}