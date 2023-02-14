#include <iostream>

using namespace std;

int main()
{
	#pragma region 기본적인설명
	
	// <상수 상수>
	const int a = 5;
	const int* ptrA = &a; // 상수인 변수의 주소를 넣어줄라면 포인터 변수 또한 상수로 해줘야 함
	// 왜냐하면 일반 포인터 변수는 역참조로 a의 값을 바꿀 수 가능성이 있기 때문에 안전한 상수로 해줘야 함

	*ptrA = 7; // (에러코드) ptrA가 가리키고 있는 a는 상수이기 때문에 값을 변경할 수 없음

	cout << *ptrA << endl; // 5 출력


	// <int, 상수>
	int b = 7;
	const int* ptrB = &b;

	*ptrB = 8; // (에러코드) ptrB가 가리키고 있는 b는 상수가 아니지만 포인터 변수가 상수이기 때문에 역참조로 값 변경 불가능


	// <일반 포인터에 상수 포인터 할당>
	int a2 = 3;
	int b2 = 7;

	int* ptr1;
	const int* ptr2 = &a2;

	ptr1 = ptr2;  // (에러코드) 일반 포인터에 상수 포인터는 할당해 줄 수 없음
	// 일반 포인터 변수가 역참조로 a의 값을 변경할 수 있기 때문에

	#pragma endregion

	#pragma region 상수포인터정리
	
	int value = 5;
	int value2 = 8;

	const int* ptrX = &value; // 역참조로 값 변경 불가능, ptrX의 주솟값 변경 가능
	*ptrX = 7; // (에러코드)
	ptrX = &value2; // (가능)

	int* const ptrY = &value; // 역참조로 값 변경 가능, ptrY의 주솟값 변경 불가능
	*ptrY = 7; // (가능)
	ptrY = &value2; // (에러코드)

	const int* const ptrZ = &value; // 역참조로 값 변경 불가능, ptrZ의 주솟값 변경 불가능
	*ptrZ = 7; // (에러코드)
	ptrZ = &value2; // (에러코드)

	#pragma endregion

	return 0;
}