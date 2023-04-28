#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int a, b;

	srand((unsigned int)time(NULL));

	a = rand() % 100 + 1; // 0 ~ 99 + 1

	// 딜레이를 주지 않으면 a와 b가 값이 같음
	Sleep(500);
	
	b = rand() % 100 + 1;

	cout << a << " + " << b << " = ";

	int answer = a + b;

	while (true)
	{
		int input;
		cin >> input;

		if (input == answer) break;
		else cout << "틀렸습니다" << endl;
	}

	cout << "맞았습니다" << endl;

	return 0;
}