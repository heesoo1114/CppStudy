#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int answer = 0;
	for (int i = 1; pow(i, 2) <= n; i++)
	{
		answer++;
	}

	cout << answer << endl;
}