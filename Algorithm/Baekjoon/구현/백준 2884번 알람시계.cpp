#include<iostream>
using namespace std;

int main()
{
	#pragma region 실행속도UP

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

#pragma endregion

	int h, m;
	cin >> h >> m;

	if (m < 45)
	{
		if (h == 0) h = 24;

		h -= 1;
		m += 15;
	}
	else
	{
		m -= 45;
	}

	cout << h << " " << m << endl;

	return 0;
}