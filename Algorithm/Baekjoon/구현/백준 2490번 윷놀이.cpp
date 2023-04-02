#include <iostream>
using namespace std;

int main()
{
	int caseCount = 3;
	while (caseCount != 0)
	{
		int up = 0;    // 등 : 1
		int down = 0;  // 배 : 0

		for (int i = 0; i < 4; i++)
		{
			int input;
			cin >> input;

			if (input == 0)
			{
				++down;
			}
			else if (input == 1)
			{
				++up;
			}
		}

		if (down == 1)
		{
			cout << "A" << endl;
		}
		else if (down == 2)
		{
			cout << "B" << endl;
		}
		else if (down == 3)
		{
			cout << "C" << endl;
		}
		else
		{
			if (down > up)
			{
				cout << "D" << endl;
			}
			else
			{
				cout << "E" << endl;
			}
		}

		--caseCount;
	}
} 

// 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 
// 도(배 한 개, 등 세 개), 
// 개(배 두 개, 등 두 개), 
// 걸(배 세 개, 등 한 개), 
// 윷(배 네 개), 
// 모(등 네 개) 