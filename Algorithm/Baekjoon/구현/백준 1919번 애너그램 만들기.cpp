#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(NULL);

	map<int, int> mA;
	map<int, int> mB;

	int result = 0;

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		int tag = a[i];
		mA[tag]++;
	}

	for (int i = 0; i < b.length(); i++)
	{
		int tag = b[i];
		mB[tag]++;
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		if (mA[i] == mB[i])
		{
			continue;
		}

		result += abs(mA[i] - mB[i]);
	}

	cout << result << endl;
}