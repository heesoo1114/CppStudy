#include <iostream>
using namespace std;

int n, k, cnt;

// 현재위치와 카운트 (몇 번 올랐는지)
void s(int x, int y)
{
	// 종료 조건
	if (x > n || y >= k) // 계단을 더 올랐거나, 주어진 기회를 다 소진하였을 때
	{
		return;
	}

	if (x == n) // 계단을 다 올랐을 때
	{
		cnt++;
		return;
	}

	// 문제에서 한 번에 1칸, 2칸을 오를 수 있다고 했음
	// 따라서 1칸 오르고 기회 1회 차감하는 함수 호출, 2칸 오르고 기회 1회 차감하는 함수 호출
	s(x + 1, y + 1);
	s(x + 2, y + 1);
}

int main()
{
	// n : 계단 칸
	// k : 올라갈 수 있는 횟수
	cin >> n >> k;
	s(0, 0);
	cout << cnt << endl;
}