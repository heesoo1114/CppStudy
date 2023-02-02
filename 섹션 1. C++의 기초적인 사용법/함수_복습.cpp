using namespace std;
#include <iostream>

// 반환 O
int AddNumber1(int a, int b)
{
	int sum = a + b;
	
	return sum;
}

// 반환 X
void AddNumber2(int a, int b)
{
	cout << a + b << endl;
}

int main()
{
	int inputA;
	int inputB;

	cin >> inputA >> inputB;

	cout << inputA + inputB << endl;
	cout << AddNumber1(inputA, inputB) << endl;
	AddNumber2(inputA, inputB);

	// 23~25줄에서 각 한 줄씩의 코드는 출력값이 같음

	return 0;
}
