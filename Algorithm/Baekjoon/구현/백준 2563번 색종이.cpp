#include <iostream>
using namespace std;

int main()
{
	int arr[100][100] = { 0 };

	int result = 0; // 실제 크기

	int paperCount; // 종이 개수
	cin >> paperCount;

	for (int i = 0; i < paperCount; i++)
	{
		int h, v;
		cin >> h >> v;

		for (int x = h; x < h + 10; x++)
		{
			for (int y = v; y < v + 10; y++)
			{
				if (arr[x][y] == 1)
				{
					continue;
				}
				arr[x][y] = 1;
				result++;
			}
		}
	}

	cout << result << endl;
}