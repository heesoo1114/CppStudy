#include <iostream>
#include <algorithm>
using namespace std;

/*
	m = 21
	ผýภฺต้ : 5, 6, 7, 8, 9

	9 8 7 : 24
	9 8 6 : 23
	9 8 5 : 22 
	9 7 6 : 22
	9 7 5 : 21
	9 6 5 : 20
	
	8 7 6 : 21
	8 7 5 : 20
	8 6 5 : 19
	
	7 6 5 : 18
*/

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[101];

	int n, m, answer;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n, greater<>());
	answer = 0;

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int temp = arr[i] + arr[j] + arr[k];

				if (temp <= m)
				{
					if (temp == m)
					{
						cout << m << endl;
						return 0;
					}
					else
					{
						if (temp > answer)
						{
							answer = temp;
						}
					}
				}
			}
		}
	}

	cout << answer << endl;

}