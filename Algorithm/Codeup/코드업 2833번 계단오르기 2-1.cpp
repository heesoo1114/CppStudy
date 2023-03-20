#include <iostream>
using namespace std;

int n, k, cnt;

void s(int x, int y)
{
	if (x > n || y >= k) 
	{
		return;
	}

	if (x == n)
	{
		cnt++;
		return;
	}

	s(x + 1, y + 1);
	s(x + 2, y + 1);
	s(x + 3, y + 1);
}

int main()
{
	cin >> n >> k;
	s(0, 0);
	cout << cnt << endl;
}