#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 1;
	int v = add(x, x++);

	cout << v << endl;
	// 정상적으로 실행이 되면 3이 나와야 정상인데 4가 출력 됨
	// 같은 변수를 동시에 인수로 사용하는데 증감연산자를 사용하는 코딩은 하지말자
	// -> 이유 : 컴파일러에서 두 매개변수 중 x를 먼저 연산할지 ++x를 먼저 연산할지 헷갈려 함

	int a = 1;
	int b = 2;
	int sum = add(a, b++);

	cout << sum; 
	// 이 상황은 정상적으로 실행됨

	int z = 1;
	/*
		z = z--;
		z = z++;

		위와 같이 코딩하지 말자

		z += 1;
		z -= 1; 

		로 수정하자
	*/
	return 0;
}