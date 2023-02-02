#include <iostream>

using namespace std;

// 순차적으로 컴파일하기 때문에 자신보다 아래 줄에 있는 코드들을 알지 못함

// 선언(forward declaration)
int Add(int a, int b);
void PrintHelloWorld();

int main()
{
	PrintHelloWorld();
	cout << Add(1, 2) << endl;

	return 0;
}

// 정의(definition)
int Add(int a, int b)
{
	return a + b;
}

void PrintHelloWorld()
{
	cout << "HelloWorld" << endl;
}