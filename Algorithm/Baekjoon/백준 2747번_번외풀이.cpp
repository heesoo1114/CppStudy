#include<iostream>
#include<vector>
using namespace std;

int arr[50];

// 재귀적 동적 계획법
int func(int num)
{
	// 0번째 0, 1번째 1로 베이스 깔기
	if (num <= 1)
	{
		return num;
	}

	// 배열이 비어있지 않으면 이미 계산을 했다는 뜻이니 
	// 다시 계산을 하지 않고 이미 계산이 되어 있는 값을 반환해서 가져옴
	if (arr[num] != 0) 
	{
		return arr[num];
	}

	return arr[num] = func(num - 1) + func(num - 2);
}

int main()
{
	#pragma region 실행속도UP
	// 실행 속도 UP
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	#pragma endregion

	int input;

	cin >> input;

	cout << func(input) << endl;

	return 0;
}