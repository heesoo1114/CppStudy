#include <iostream>
using namespace std;

int main()
{
	int caseCount;
	cin >> caseCount;

	int Y, M;
	Y = M = 0;

	for (int i = 0; i < caseCount; i++)
	{
		int input;
		cin >> input;

		Y += 10 * (input / 30 + 1);
		M += 15 * (input / 60 + 1);
	}

	if (Y < M)
	{
		cout << "Y" << " " << Y << endl;
	}
	else if (Y > M)
	{
		cout << "M" << " " << M << endl;
	}
	else if (Y == M)
	{
		cout << "Y" << " " << "M" << " " << Y << endl;
	}
}