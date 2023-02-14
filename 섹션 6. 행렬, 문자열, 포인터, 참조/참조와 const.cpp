#include <iostream>

using namespace std;

// 참조 변수가 아니었다면 오는 인자를 ref에 복사
// 참조 변수이므로 지역변수 ref가 인자의 메모리에 참조하게 됨
// -> 복사 과정 생략으로 인한 성능 상승
void doSomething(const int &ref) 
{
	cout << ref << endl;
}

int main()
{
	#pragma region 다양한경우

	int x = 5;
	const int& ref = x; // 값은 변경할 수 없으나 읽어오는 건 가능함

	const int x1 = 5;
	int& ref1 = x1; // (에러코드) ref1이 상수인 x1의 값을 변경할 가능성이 있기 때문에 막아줌  

	const int x2 = 5;
	const int& ref2 = x2; // ref2가 상수인 x2의 값을 변경할 가능성이 없으므로 문제가 없음

	const int x3 = 5;
	const int& ref3 = x3; 
	const int& ref4 = ref3;

	int x4 = 5;
	int& ref5 = x4;
	const int& ref6 = ref5; // ref6은 값 변경 불가능, 그러나 ref5는 x4의 값 변경 가능

	#pragma endregion

	int &refA = 5; // (에러코드) 일반 참조 변수는 L-Value 변수만 참조 가능
	const int &refB = 5; // (가능) 상수 참조 변수는 L-Value와 R-Value 모두 참조 가능
	// !!(const 참조 변수의 최대 차이점)!!

	int num = 3;

	doSomething(refB);	// 5 출력
	doSomething(num);	// 3 출력
	doSomething(3);		// 3 출력
	doSomething(4 + 6); // 10 출력
	doSomething(4 * 6); // 24 출력

	return 0;
}