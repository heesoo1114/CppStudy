#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int money[10];
	int N, K;
	int count = 0;

	// 입력
	cin >> N >> K;

	for (int i = 0; i < N; i++) cin >> money[i];

	for (int i = N - 1; i >= 0; i--)
	{
		while (K >= money[i]) // K가 나누려는 수보다 크면 
		{
			K -= money[i]; // K에 나누려는 수를 빼줌
			count++;
		}
	}
	
	// 출력
	cout << count << endl;

	return 0;
}