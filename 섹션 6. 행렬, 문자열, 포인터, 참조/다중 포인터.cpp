#include <iostream>

using namespace std;

int main()
{
	int value = 5;
	int *ptr = &value;
	int	**ptrptr = &ptr; // 이중 포인터 (포인터의 포인터)

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl; 
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl;
	cout << **ptrptr << endl;

	/*
		00CFF838 5 00CFF834 출력
		value의 주소, ptr 역참조(value의 값), ptr의 주소

		00CFF834 00CFF838 00CFF830 출력 
		ptr의 주소, ptrptr의 역참조(ptr에 들어있는 주소), ptrptr의 주소

		5 출력
		ptr의 이중 역참조(ptr에 들어있는 주소를 역참조, value의 주소를 또 찾아가서 value의 값을 출력)
	*/

	return 0;
}