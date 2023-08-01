#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

bool cmp(tuple<string, int, int, int> a, tuple<string, int, int, int> b)
{
	if (get<1>(a) == get<1>(b))
	{
		if (get<2>(a) == get<2>(b))
		{
			if (get<3>(a) != get<3>(b))
			{
				return get<3>(a) > get<3>(b);
			}
			else
			{
				return get<0>(a) < get<0>(b);
			}
		}
		return get<2>(a) < get<2>(b);
	}
	return get<1>(a) > get<1>(b);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string name;
	int n, kor, eng, math;
	cin >> n;

	tuple<string, int, int, int>* t = new tuple<string, int, int, int>[n + 1];

	for (int i = 0; i < n; i++)
	{
		cin >> name >> kor >> eng >> math;
		t[i] = make_tuple(name, kor, eng, math);
	}

	sort(t, t + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << get<0>(t[i]) << "\n";
	}

	delete[] t;
}