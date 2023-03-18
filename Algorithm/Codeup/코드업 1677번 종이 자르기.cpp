#include<iostream>
using namespace std;

int main()
{
	int v, h;
	cin >> v >> h;

	for (int i = 1; i <= h; i++) // 가로
	{
		for (int j = 1; j <= v; j++) // 세로
		{
			if (i == 1 || i == h) // 첫 번째 줄이거나 마지막 줄
			{
				if (j == 1 || j == v) // 가로줄의 처음과 마지막
				{
					cout << "+";
				}
				else 
				{
					cout << "-";
				}
			}
			else 
			{
				if (j == 1 || j == v) // 가로줄의 처음과 마지막
				{
					cout << "|";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	return 0;
}