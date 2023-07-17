#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt = 0;
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int input;
		cin >> input;

		if (input == 1) continue;

		int jCnt = 0;
		for (int j = 1; j <= input; j++)
		{
			if (input % j == 0)
			{
				jCnt++;
			}
		}

		if (jCnt <= 2)
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}