#include <iostream>
using namespace std;

// 알고리즘 분류는 DP임 추후 DP로도 풀이하기
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt;
	cin >> cnt;

	if (cnt % 2 == 0)
	{
		cout << "CY" << endl;
	}
	else if (cnt % 2 == 1)
	{
		cout << "SK" << endl;
	}
}