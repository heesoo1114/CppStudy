#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;

			if (cnt == k)
			{
				cout << i << endl;
				break;
			}
		}
	}

	if (cnt < k)
	{
		cout << "0" << endl;
	}
}