#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v;

	int min, max;
	cin >> min >> max;

	for (int i = min; i <= max; i++)
	{
		if (i == 1) continue;

		int jCnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				jCnt++;
			}
		}

		if (jCnt <= 2)
		{
			v.push_back(i);
		}
	}

	if (v.empty())
	{
		cout << "-1" << endl;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	cout << sum << endl;
	cout << v.front() << endl;
}