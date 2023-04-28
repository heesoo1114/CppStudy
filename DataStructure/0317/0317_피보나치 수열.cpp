#include<iostream>
using namespace std;

int temp[10];

int f[100] = { 0, 1, 1 };

int Fibonacci(int index)
{
	// �⺻������ ù ��°�� �� ��°�� �⺻������ 1�� ����
	if (index <= 2) 
	{
		temp[index - 1] = 1;
		return temp[index - 1];
	}

	// �湮�� �ߴ� ģ���� �� �迭�� ���Ұ��� ��ȯ
	if (temp[index - 1] != NULL)
	{
		return temp[index - 1];
	}

	// �湮�� ó�� �ϴ� ģ���ϱ� �迭�� ���� ����
	temp[index - 1] = Fibonacci(index - 1) + Fibonacci(index - 2);

	return temp[index - 1];
}

int Fibonacci2(int n)
{
	if (f[n] != 0)
	{
		return f[n];
	}

	f[n] = Fibonacci(n - 1) + Fibonacci2(n - 2);
	return f[n];
}

int main()
{
	int input;
	cin >> input;

	cout << Fibonacci(input) << endl;
	cout << Fibonacci2(input) << endl;
}