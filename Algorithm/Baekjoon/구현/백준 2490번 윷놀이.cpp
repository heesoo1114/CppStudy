#include <iostream>
using namespace std;

int main()
{
	int caseCount = 3;
	while (caseCount != 0)
	{
		int up = 0;    // �� : 1
		int down = 0;  // �� : 0

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

// �� �� ��¦�� ������ ���� �� ��¦�� �� Ȥ�� �� ������ �־��� �� 
// ��(�� �� ��, �� �� ��), 
// ��(�� �� ��, �� �� ��), 
// ��(�� �� ��, �� �� ��), 
// ��(�� �� ��), 
// ��(�� �� ��) 