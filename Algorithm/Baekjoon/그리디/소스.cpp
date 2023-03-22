#include<iostream>
using namespace std;

int main()
{
	#pragma region 실행속도UP

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

#pragma endregion

	int arr[1001] = { 0, };

	int humanCount;
	cin >> humanCount;

	int add = 0;
	int sum = 0;

	for (int i = 0; i < humanCount; i++) cin >> arr[i];
	
	

	// cout << sum << endl;

	return 0;
}