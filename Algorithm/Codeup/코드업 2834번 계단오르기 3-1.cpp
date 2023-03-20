#include <iostream>
using namespace std;

int n, k, cnt;

// �޸������̼ǿ� ����� ������ �迭�� �Ű������� ������ ���߾
int memo[40][40][40];
int check[40][40][40];

// oo�� ��ġ, xx�� ��ġ, k(Ƚ��)
int s(int oo, int xx, int y)
{
	if (oo > n || xx > n || y >= k)
	{
		return 0;
	}

	if (oo == n && xx == n)
	{
		return 1;
	}

	if (check[oo][xx][y] == 1)
	{
		return memo[oo][xx][y];
	}

	check[oo][xx][y] = 1;

	return memo[oo][xx][y] = s(oo + 1, xx + 1, y + 1) + s(oo + 1, xx + 2, y + 1) + s(oo + 2, xx + 1, y + 1) + s(oo + 2, xx + 2, y + 1);
}

int main()
{
	cin >> n >> k;
	
	cout << s(0, 0, 0) << endl;
}