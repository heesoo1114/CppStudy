#include <iostream>

using namespace std;

int main()
{
	int nansu;

	srand((unsigned int)time(NULL)); // �߿�!

	for (int i = 0; i < 10; i++)
	{
		// 10 ~ 30 -> 0 ~ 20 + 10
		nansu = rand() % 21 + 10; // �߿�!
		cout << nansu << endl;
	}

	return 0;
}