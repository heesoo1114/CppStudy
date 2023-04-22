#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	int N, V, input;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	cin >> V;
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i] != V)
		{
			v.pop_back();
		}
	}

	cout << v.size() << endl;
}
