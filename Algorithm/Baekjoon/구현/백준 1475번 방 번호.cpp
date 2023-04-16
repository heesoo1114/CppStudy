#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	vector<int> list;
	
	int input;
	cin >> input;

	while (true)
	{
		v.push_back(input % 10);
		input /= 10;

		if (input < 1) break;
	}

	for (int j = 0; j < 9; j++)
	{
		int cnt = 0;

		for (int i = 0; i < v.size(); i++)
		{
			if (j == 6)
			{
				if (v[i] == 6 || v[i] == 9)
				{
					cnt++;
				}
			}
			else
			{
				if (j == v[i])
				{
					cnt++;
				}
			}
		}

		list.push_back(cnt);
	}

	int max = 0;
	for (int i = 0; i < list.size(); i++)
	{
		int num = 0;

		if (i == 6)	
		{
			if (list[i] % 2 == 0)
			{
				num = list[i] / 2;
			}
			else
			{
				num = list[i] / 2 + 1;
			}
		}
		else
		{ 
			num = list[i];
		}

		if (max < num)
		{
			max = num;
		}
	}

	cout << max << endl;
}