#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int sum = a * b;

	if (a < b)
	{
		swap(a, b);
	}

	// 유클리드 호제법
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	cout << a << endl;
	cout << sum / a << endl;
}