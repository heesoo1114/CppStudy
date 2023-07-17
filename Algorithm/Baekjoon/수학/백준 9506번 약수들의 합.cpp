#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		int num;
		cin >> num;

		if (num == -1) break;

		vector<int> v;
		int sum = 0;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
			{
				v.push_back(i);
				sum += i;
			}
		}

		if (sum == num)
		{
			cout << num << " = " << 1;
			for (int i = 2; i < num; i++)
			{
				if (num % i == 0)
				{
					cout << " + " << i;
				}
			}
			cout << endl;
		}
		else
		{
			cout << num << " is NOT perfect." << endl;
		}
	}
}