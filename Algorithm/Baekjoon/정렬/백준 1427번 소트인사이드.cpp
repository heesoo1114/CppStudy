#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v;

	int input;
	cin >> input;

	while (input > 0)
	{
		v.push_back(input % 10);
		input /= 10;
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
}