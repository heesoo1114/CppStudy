#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int money[10];
	int N, K;
	int count = 0;

	// �Է�
	cin >> N >> K;

	for (int i = 0; i < N; i++) cin >> money[i];

	for (int i = N - 1; i >= 0; i--)
	{
		while (K >= money[i]) // K�� �������� ������ ũ�� 
		{
			K -= money[i]; // K�� �������� ���� ����
			count++;
		}
	}
	
	// ���
	cout << count << endl;

	return 0;
}