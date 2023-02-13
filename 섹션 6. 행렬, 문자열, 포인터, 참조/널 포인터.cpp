#include <iostream>
#include <cstddef> // nullptr_t

using namespace std;

void doSomething(double *ptr)
{
	cout << "doSomething ptr : " << &ptr << endl; 

	if (ptr != nullptr)
	{
		cout << *ptr << endl;
	}
	else
	{
		cout << "nullptr" << endl;
	}
}

int main()
{
	// nullptr = 포인터 변수 안에 아무 값이 없다는 뜻 (가지고 있는 주솟값이 없다)
	// 포인터를 초기화해 주지 않으면 쓰레기 값이 들어가 있음
	// 그렇기 때문에 넣을 주소가 없으면 nullptr로 초기화해 주는 것이 좋음

	double *ptr = nullptr; // ptr을 nullptr로 초기화해 줌
	// c언어에서는 NULL로 쓰임 (NULL = nullptr)

	doSomething(ptr); // ptr = nullptr
	doSomething(nullptr); // nullptr 

	double d = 123.4;

	doSomething(&d); // d의 주솟값 넣어줌

	ptr = &d; // ptr에 d의 주솟값 넣어줌

	doSomething(ptr); // ptr = &d

	nullptr_t nptr; // nullptr_t 변수는 nullptr만 넣어줄 수 있음

	cout << "main ptr : " << &ptr << endl; // main에서의 ptr과 doSomething의 값은 다름
	// doSomething으로 ptr이 복사가 될 때 ptr이 넘어가면서 double d가 가지고 있는 메모리의 주솟값이 다시 복사가 되기 때문

	return 0;
}