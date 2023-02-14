#include <iostream>

using namespace std;

int main()
{
	// void 포인터, generic 포인터라고도 부름

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i; // int의 주소도 넣을 수 있음
	ptr = &f; // float의 주소도 넣을 수 있음
	ptr = &c; // char의 주소도 넣을 수 있음

	/*
		<void 포인터의 한계>

		1. 포인터 연산을 할 수 없음
		- 포인터 연산을 하기 위해서는 포인터가 가리키고 있는 데이터 타입을 알아야 하는데 void 포인터는 알 수 없음
		
		2. 역참조를 할 수 없음
		- 강제로 형 변환을 해야 역참조가 가능해짐
	*/

	return 0;
}