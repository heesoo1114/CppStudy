#include <iostream>

using namespace std;

// ���������� �������ϱ� ������ �ڽź��� �Ʒ� �ٿ� �ִ� �ڵ���� ���� ����

// ����(forward declaration)
int Add(int a, int b);
void PrintHelloWorld();

int main()
{
	PrintHelloWorld();
	cout << Add(1, 2) << endl;

	return 0;
}

// ����(definition)
int Add(int a, int b)
{
	return a + b;
}

void PrintHelloWorld()
{
	cout << "HelloWorld" << endl;
}