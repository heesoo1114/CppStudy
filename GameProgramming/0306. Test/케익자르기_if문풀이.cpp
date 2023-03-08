#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (min(a, b) < c && c < max(a, b)) // c가 안에 있을 때
	{
		if ((min(a, b) < d && d < max(a, b))) // d가 안에 있을 때
		{
			cout << "not cross" << endl;
		}
		else // d가 밖에 있을 때
		{
			cout << "cross" << endl;
		}
	}
	else // c는 밖에 있음
	{
		if ((min(a, b) < d && d < max(a, b))) // d가 안에 있을 때
		{
			cout << "cross" << endl;
		}
		else // d가 밖에 있을 때
		{
			cout << "not cross" << endl;
		}
	}

	return 0;
}