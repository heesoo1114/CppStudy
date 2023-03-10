#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{	
	// ¸ðÀ½ : A, E, I, O, U

	char mo[5] = { 'a', 'e', 'i', 'o', 'u' };

	int moCount = 0;
	int inputCount = 0;

	while (true)
	{
		char input;
		cin >> input;

		if (input == '1') break;

		for (char ch : mo)
		{
			if (input == ch)
			{
				moCount++;
			}
		}

		inputCount++;
	}

	cout << moCount << endl;
	cout << inputCount - moCount << endl;

	return 0;
}