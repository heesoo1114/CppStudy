#include<iostream>
#include<vector>
using namespace std;

// 재귀함수 사용 X
int main()
{
	// 실행 속도 UP
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int input;
	int arr[46] = { 0, 1, };

	cin >> input;

	for (int i = 2; i <= input; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[input];

	return 0;
}