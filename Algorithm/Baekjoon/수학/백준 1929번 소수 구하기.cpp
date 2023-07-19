#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<bool> v;

	int a, b;
	cin >> a >> b;

	v.resize(b + 1);

	for (int i = 0; i < v.size(); i++)
	{
		v[i] = true;
	}

	for (int i = 2; i <= b; i++)
	{
		if (v[i] == true)
		{
			for (int j = i * 2; j <= b; j += i)
			{
				v[j] = false;
			}
		}
	}

	for (int i = a; i <= b; i++)
	{
		if (i == 1) continue;

		if (v[i])
		{
			cout << i << "\n";
		}
	}
}