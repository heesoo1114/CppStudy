#include<iostream>
#include<vector>

using namespace std;

int main()
{
	// �ʱ⼼��
	vector<long long> v(101);

	v[0] = 1, v[1] = 1, v[2] = 1;
	v[3] = 2, v[4] = 2;

	// 100���� ����
	for (int i = 5; i < 101; i++)
	{
		v[i] = v[i - 1] + v[i - 5];
	}

	int caseCount; // �� �� ����
	int num[100];  // �� ��° �ĵ��� ������ �������

	// ����� ����
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < caseCount; i++)
	{
		cout << v[num[i] - 1] << endl;
	}

	return 0;
}