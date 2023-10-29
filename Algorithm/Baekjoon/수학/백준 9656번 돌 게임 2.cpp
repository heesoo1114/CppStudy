#include <iostream>
using namespace std;

// 알고리즘 분류는 DP임 추후 DP로도 풀이하기
int main()
{
	int cnt;
	cin >> cnt;

	if (cnt % 2 == 1)
	{
		cout << "CY" << endl;
	}
	else if (cnt % 2 == 0)
	{
		cout << "SK" << endl;
	}
}