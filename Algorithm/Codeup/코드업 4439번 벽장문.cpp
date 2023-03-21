#include<iostream>
using namespace std;

int n, door1, door2, m;
int arr[21];
int answer = 9999;

// 열린 문, 사용할 문, 거리, 이동횟수(제한사항)
void solve(int d1, int d2, int dis, int cnt)
{
	// 종료조건
	if (m == cnt) // 사용할 문 개수 == 이동횟수
	{
		// 최소 이동거리 넣어주기
		answer = min(answer, dis);
		return;
	}

	// 2가지 경우
	// d1 움직이는 경우, d2 움직이는 경우
	solve(arr[cnt], d2, dis + abs(arr[cnt] - d1), cnt + 1);
	solve(d1, arr[cnt], dis + abs(arr[cnt] - d2), cnt + 1);
	// abs : 절댓값
}

int main()
{
	cin >> n; // 벽장의 개수
	cin >> door1 >> door2; // 열려있는 문 위치
	cin >> m; // 사용할 문 개수

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i]; // 사용할 문 저장
	}

	solve(door1, door2, 0, 0);

	cout << answer << endl;
}