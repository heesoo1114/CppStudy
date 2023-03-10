#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	#pragma region for
	
	int input;
	cin >> input;

	for (int i = input; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}

	#pragma endregion

	cout << "____________________________________" << endl;

	#pragma region while

	int input2;
	cin >> input2;

	int num1 = 1;

	while (num1 < 10)
	{
		cout << input2 << "*" << num1 << "=" << input2 * num1 << endl;
		num1++;
	}

	#pragma endregion

	cout << "____________________________________" << endl;

	#pragma region do-while

	int input3;
	cin >> input3;

	int num2 = 1;

	do
	{
		cout << input3 << "*" << num2 << "=" << input3 * num2 << endl;
		num2++;
	} while (num2 != 10);

	#pragma endregion

	cout << "____________________________________" << endl;

	#pragma region foreach

	int input4;
	cin >> input4;

	int num3[10];

	for (int i = 0; i < 9; i++) num3[i] = i + 1;
	
	for (int num : num3)
	{
		cout << input4 << "*" << num << "=" << input4 * num << endl;
	}

	#pragma endregion

	return 0;
}