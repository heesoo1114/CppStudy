#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	#pragma region 암시적형변환
	
	int a = 123.0;
	// 현재 a에 123.0으로 double값을 할당해주고 있는데 에러가 발생하지 않고 있는데 왜일까?
	// 개발자가 형 변환을 시켜주지 않았어도 컴파일러가 형 변환시켜주었기 때문임
	// 강제적으로 double인 123.0을 int인 123으로 형 변환해서 a에 넣어줌

	cout << a << " " << typeid(a).name() << endl; // 123 int 출력

	#pragma endregion

	#pragma region 명시적형변환

	int b = (int)4.0; // 괄호에 데이터 타입을 넣어줘서 개발자가 형 변환 시킴
	b = static_cast<int>(4.99); // static_cast<데이터타입> 을 작성

	cout << b << endl; // 4 출력

	#pragma endregion

	#pragma region 주의사항
	
	float value = 0.123456789;
	cout << value << endl; // 0.123456791043 출력
	/*
		데이터 타입이 큰 것에서 작은 것으로 변환 시키는 데에는 문제가 없지만
		작은 것에서 큰 것으로 변환 시킬 때에는 데이터 손실이 발생하기 때문에 이상한 값이 나올 수 있음
	*/

	cout << 5 - 10; // -5 출력
	cout << 5u - 10; // 이상한 값 출력
	/*
		형 변환에서도 우선순위가 존재

		unsigned int - int 에서 형 변환을 할 때
		unsigned int가 int 보다 우선순위가 더 높기 때문에
		5u를 기준으로 형 변환ㅇ르 하게 됨

		-> 이 때 -5는 음수인데 unsigned int의 범위에 포함되지 않음 
	*/

	#pragma endregion

	return 0;
}