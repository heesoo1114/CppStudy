#include<iostream>
using namespace std;

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	int count = 0;
	int n;
	cin >> n;

	// 자신을 약수에 포함시키지 않아야 하기 때문에 자신의 -1한 수까지 약수인지 확인하기
	for (int i = 1; i < n; i++) 
	{
		if (n % i == 0) 
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}