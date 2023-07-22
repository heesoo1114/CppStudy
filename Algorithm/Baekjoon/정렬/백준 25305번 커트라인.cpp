#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v;
	int n, k, input;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cout << v[n - k] << endl;
}