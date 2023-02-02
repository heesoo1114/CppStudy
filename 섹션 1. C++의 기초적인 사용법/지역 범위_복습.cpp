using namespace std;
#include <iostream>

void doSomething(int x)
{
	x = 13;
	
	cout << x << endl; 
	// 13 출력
	// x = 13을 해주지 않았다면 0으로 출력
}

int main()
{
	int x = 0;

	cout << x << endl; // 0 출력
	doSomething(x); 
	cout << x << endl; // 0 출력

	return 0;
}