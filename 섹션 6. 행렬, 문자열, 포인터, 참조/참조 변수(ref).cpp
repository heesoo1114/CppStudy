#include <iostream>

using namespace std;

#pragma region 함수

void ToNormal(int num) // 일반적으로 매개변수를 받아옴. 이때 num은 그냥 인자에 넣어진 num의 값을 복사한 상태
{
	num = 10;
	cout << "ToNormal : " << num << endl;
}

void ToRef(int &num) // 매개변수를 참조형식으로 받아옴. 이때 num은 인자에 넣어진 num을 참조함
{
	num = 10; // (main에 있는) num = 10
	// ToRef에서의 num이 main에서의 num을 참조하고 있기 때문에
	// main에서의 num에 영향을 줌

	// num의 값 변경을 막을라면 const int &num으로 해주면 됨

	// 배열을 매개변수로 받아올라면 int &arr[배열의 크기] 로 작성해주면 됨
	// 이때 배열의 크기는 꼭 필수로 작성해주어여 함

	cout << "ToRef : " << num << endl;
}

#pragma endregion

struct Something
{
	int a;
	int b;
};

struct Something2
{
	Something st;
};

int main()
{
	// 참조 또한 내부적으로 포인터로 구현이 되어 있음

	#pragma region 기본적인사용법
	
	int value = 5;

	int* ptr = &value;

	int& ref = value; // 참조 변수 (ref가 value의 별명이라고 생각하면 됨)
	// ref와 value는 같은 메모리 사용
	// 참조 변수는 항상 선언과 동시에 초기화 필수

	ref = 100; // value = 100 (ref는 value를 참조)

	cout << value << endl; // 100 출력

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	// 위 3개는 같은 주소가 출력됨

	int value2 = 10;
	
	ref = value2; // 참조 대상 value -> value2로 변경
	value2 = 199; // value2 = 199

	cout << value2 << endl; // 199 출력

	const int a = 8;
	int& ref1 = a; // (에러코드) ref1이 a의 값을 바꿀 가능성이 있기 때문에 막아줌
	const int& ref2 = a;

	#pragma endregion

	#pragma region 참조매개변수
	
	int num = 5;

	cout << num << endl; // 5 출력

	ToNormal(num);

	cout << num << endl; // 5 출력

	ToRef(num);

	cout << num << endl; // 10 출력

	#pragma endregion

	Something2 st2;
	st2.st.a = 10;

	int	&refA = st2.st.a;
	refA = 10; // st2.st.a = 10

	// <포인터와 참조의 거의 흡사한 사용>
	int x = 5;
	int* const ptrX = &x;
	int& refX = x;

	*ptrX = 10;
	refX = 10;

	return 0;
}