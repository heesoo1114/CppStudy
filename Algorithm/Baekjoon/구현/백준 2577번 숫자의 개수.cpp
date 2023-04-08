#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int sum = 1;

	for (int i = 0; i < 3; i++)
	{
		int input;
 		cin >> input;
		sum *= input;
	}

	while (true)
	{
		v.push_back(sum % 10);
		sum /= 10;

		if (sum < 1) break;
	}

	for (int i = 0; i < 10; i++)
	{
		int cnt = 0;
		for (int j = 0; j < v.size(); j++)
		{
			if (i == v[j])
			{
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}