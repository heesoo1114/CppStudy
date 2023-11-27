#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int tCnt, aCnt, bCnt, input;

	cin >> tCnt;
	for (int i = 0; i < tCnt; i++)
	{
		vector<int> a;
		vector<int> b;
		int answer = 0;

		cin >> aCnt >> bCnt;

		for (int j = 0; j < aCnt; j++)
		{
			cin >> input;
			a.push_back(input);
		}
		for (int j = 0; j < bCnt; j++)
		{
			cin >> input;
			b.push_back(input);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		for (auto n : a)
		{
			answer += lower_bound(b.begin(), b.end(), n) - b.begin();
		}

		cout << answer << "\n";
	}

}