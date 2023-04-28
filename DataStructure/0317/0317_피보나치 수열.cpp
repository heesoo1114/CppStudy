#include<iostream>
using namespace std;

int temp[10];

int f[100] = { 0, 1, 1 };

int Fibonacci(int index)
{
	// 기본적으로 첫 번째와 두 번째는 기본적으로 1로 세팅
	if (index <= 2) 
	{
		temp[index - 1] = 1;
		return temp[index - 1];
	}

	// 방문을 했던 친구면 그 배열의 원소값을 반환
	if (temp[index - 1] != NULL)
	{
		return temp[index - 1];
	}

	// 방문을 처음 하는 친구니까 배열에 값을 저장
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