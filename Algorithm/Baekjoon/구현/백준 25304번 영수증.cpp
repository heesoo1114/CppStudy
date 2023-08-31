#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int totalPrice, n, price, cnt, tempPrice = 0;
	cin >> totalPrice >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> price >> cnt;
		tempPrice += (price * cnt);
	}

	if (tempPrice == totalPrice)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}