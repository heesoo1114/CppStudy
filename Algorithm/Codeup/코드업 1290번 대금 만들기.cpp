#include<iostream>
using namespace std;

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	int count = 0;
	int n;
	cin >> n;

	// �ڽ��� ����� ���Խ�Ű�� �ʾƾ� �ϱ� ������ �ڽ��� -1�� ������ ������� Ȯ���ϱ�
	for (int i = 1; i < n; i++) 
	{
		if (n % i == 0) 
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}