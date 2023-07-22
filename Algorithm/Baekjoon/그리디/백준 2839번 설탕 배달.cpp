#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v;

	int n;
	cin >> n;

	int temp = 0;
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			temp = (5 * i) + (3 * j);
			if (temp == n)
			{
				v.push_back(i + j);
			}
		}
	}

	if (v.size() == 0)
	{
		cout << "-1" << endl;
		return 0;
	}

	int min = 100000;
	for (auto inV : v)
	{
		if (inV < 100000)
		{
			min = inV;
		}
	}

	cout << min << endl;
}