#include <iostream>
using namespace std;

int n, k, m, cnt;

void solve(int x, int y)
{
	// ���� ����
	if (x > n || y >= k)
	{
		return;
	}

	if (x == n)
	{
		cnt++;
		return;
	}

	if (x + 1 == m)
	{
		solve(x + 2, y + 1);
		solve(x + 3, y + 1);
		return;
	}
	else if (x + 2 == m)
	{
		solve(x + 1, y + 1);
		solve(x + 3, y + 1);
		return;
	}
	else if (x + 3 == m)
	{
		solve(x + 1, y + 1);
		solve(x + 2, y + 1);
		return;
	}

	solve(x + 1, y + 1);
	solve(x + 2, y + 1);
	solve(x + 3, y + 1);
}

int main()
{
	// n : ����� ��� ĭ
	// m : ����� �� ���� ĭ
	// k : �� ���� ���� �� �ִ� ĭ��
	cin >> n >> m >> k;
	solve(0, 0);
	cout << cnt << endl;
}