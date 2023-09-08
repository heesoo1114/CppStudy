#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, input;
	cin >> n;
	vector<int> base(n);

	for (int i = 0; i < n; i++)
	{
		cin >> base[i];
	}

	vector<int> v(base);
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(v.begin(), v.end(), base[i]) - v.begin() << " ";
	}
}