using namespace std;
#include <iostream>

void doSomething(int x)
{
	x = 13;
	
	cout << x << endl; 
	// 13 ���
	// x = 13�� ������ �ʾҴٸ� 0���� ���
}

int main()
{
	int x = 0;

	cout << x << endl; // 0 ���
	doSomething(x); 
	cout << x << endl; // 0 ���

	return 0;
}