#include <iostream>

using namespace std;

int main()
{
	/*
		& : address-of operator
		- 변수 앞에 작성
		- 변수의 주소를 나타냄

		* : de_reference operator
		- 포인터 변수 앞에 작성
		- 변수의 주소에 담긴 실제 데이터를 나타냄
		- (이 주소로 가면 데이터가 있어요! 라고 알려주는 느낌)	

		포인터 : 다른 변수, 혹은 그 변수의 메모리 공간주소를 가리키는 변수
		역 참조 : 포인터가  가리키는 값을 가져오는 것

		<과정>
		1. 포인터 변수에 담겨있는 주소가 있고
		2. 메모리에서 어느 위치에 있는지 찾아서
		3. 그 메모리에 있는 데이터를 가져옴
		4. 역 참조 

		<포인터를 사용하는 이유>
		많은 데이터들을 복사하면 연산 시간, 사용하는 메모리 공간이 늘어나서 비효율적임
		-> 포인터로 주소 정보만 가져오면 내용물들을 복사할 필요가 없어서 효율적임

		<자료형이 다르면 주소의 크기도 다를까?>
		- 자료형의 크기가 더 크다고 해서 주소의 크기가 더 크지 않음
		- int형 변수의 주소와 double형 변수의 주소의 크기는 같음 (+ 구조체 안의 내용들과 별개로 구조체의 주소의 크기도 같음)

		64bit에서는 더 많은 메모리의 주소를  다뤄야 하기 때문에 주소를 길게 써서 86bit보다 주소가 더 크게 나옴

		!! 초기화가 안 된 포인터 변수를 사용하면 에러 발생 !!
	*/

	int x = 4;
	double y = 6;

	int *ptr_x = &x; // 포인터 변수에 주소를 넣어줌
	// + int형 포인터 변수이기 때문에 int형 변수의 주소만 넣어줄 수 있음

	double *ptr_y = &y;

	cout << x << endl; // 4 출력 (*&x 에서 *&가 없지만 프로그램에서 상쇄됨)
	cout << ptr_x << endl; // x의 주솟값 출력
	cout << *ptr_x << endl; // 4 출력 (x의 주소로 찾아가서 실제 데이터 값을 찾아와서 출력)

	struct MyStruct
	{
		int a, b, c, d;
		// MyStruct의 크기는 4 * 4 = 16byte
	};

	MyStruct *myStruct;

	cout << sizeof(ptr_x) << endl; // 4 출력
	cout << sizeof(ptr_y) << endl; // 4 출력
	cout << sizeof(myStruct) << endl; // 4 출력

	return 0;
}