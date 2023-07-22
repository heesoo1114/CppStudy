#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	bool arr[246913]{ false, false, true };

	for (int i = 2; i <= 246913; i++)
	{
		arr[i] = true;
	}

	for (int i = 2; i <= 246913; i++)
	{
		if (arr[i]) // 소수이면
		{
			for (int j = i * 2; j <= 246913; j += i)
			{
				arr[j] = false;
			}
		}
	}

	int input;
	int cnt = 0;
	while (true)
	{
		cin >> input;

		if (input == 0) break;

		for (int i = input + 1; i <= input * 2; i++)
		{
			if (i == 1)
			{
				continue;
			}

			if (arr[i])
			{
				cnt++;
			}
		}

		cout << cnt << "\n";
		cnt = 0;
	}
	return 0;
}