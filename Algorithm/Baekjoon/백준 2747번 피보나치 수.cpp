#include<iostream>
#include<vector>
using namespace std;

// ����Լ� ��� X
int main()
{
	// ���� �ӵ� UP
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