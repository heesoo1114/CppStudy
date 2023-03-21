#include<iostream>
using namespace std;

int n, door1, door2, m;
int arr[21];
int answer = 9999;

// ���� ��, ����� ��, �Ÿ�, �̵�Ƚ��(���ѻ���)
void solve(int d1, int d2, int dis, int cnt)
{
	// ��������
	if (m == cnt) // ����� �� ���� == �̵�Ƚ��
	{
		// �ּ� �̵��Ÿ� �־��ֱ�
		answer = min(answer, dis);
		return;
	}

	// 2���� ���
	// d1 �����̴� ���, d2 �����̴� ���
	solve(arr[cnt], d2, dis + abs(arr[cnt] - d1), cnt + 1);
	solve(d1, arr[cnt], dis + abs(arr[cnt] - d2), cnt + 1);
	// abs : ����
}

int main()
{
	cin >> n; // ������ ����
	cin >> door1 >> door2; // �����ִ� �� ��ġ
	cin >> m; // ����� �� ����

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i]; // ����� �� ����
	}

	solve(door1, door2, 0, 0);

	cout << answer << endl;
}