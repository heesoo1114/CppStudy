#include<iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	int lateTime;
	cin >> lateTime;

	int plusH, plusM;
	plusH = lateTime / 60;
	plusM = lateTime % 60;

	for (int i = 0; i < plusH; i++)
	{
		if (h == 23)
		{
			h = 0;
		}
		else
		{
			h++;
		}
	}

	if (m + plusM > 59)
	{
		if (h == 23)
		{
			h = 0;
		}
		else
		{
			h++;
		}
		int temp = abs(plusM - (60 - m));
		m = temp;
	}
	else
	{
		m += plusM;
	}

	cout << h << " " << m << endl;;
}