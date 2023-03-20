#include <iostream>
using namespace std;

int n, k, cnt;

void solve(int x, int y, int temp)
{
	// 종료 조건
	if (x > n || y >= k)
	{
		return;
	}

	if (x == n)
	{
		cnt++;
		return;
	}

	if (temp == 1)
	{
		solve(x + 2, y + 1, 2);
		solve(x + 3, y + 1, 3);
		return;
	}
	else if (temp == 2)
	{
		solve(x + 1, y + 1, 1);
		solve(x + 3, y + 1, 3);
		return;
	}
	else if (temp == 3)
	{
		solve(x + 1, y + 1, 1);
		solve(x + 2, y + 1, 2);
		return;
	}

	solve(x + 1, y + 1, 1);
	solve(x + 2, y + 1, 2);
	solve(x + 3, y + 1, 3);
}

int main()
{
	// n : 계단의 모든 칸
	// k : 한 번에 오를 수 있는 칸수
	cin >> n >> k;
	solve(0, 0, NULL);
	cout << cnt << endl;
}