using namespace std;
#include <iostream>

// ��ȯ O
int AddNumber1(int a, int b)
{
	int sum = a + b;
	
	return sum;
}

// ��ȯ X
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

	// 23~25�ٿ��� �� �� �پ��� �ڵ�� ��°��� ����

	return 0;
}
