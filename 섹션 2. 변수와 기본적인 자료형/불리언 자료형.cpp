#include <iostream>

using namespace std;

bool IsEqual(int a, int b)
{
	bool result = (a == b);
	
	return result;
}

int main()
{
	// bool 변수는 내부적으로 정수로 저장됨

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization
	b3 = false; // assignment

	cout << boolalpha;
	cout << b3 << endl; // false 출력

	cout << noboolalpha;
	cout << b1 << endl; // 1 출력

	/*
		boolalpha : 0, 1 이 아닌 true, false 로 출력되게 해줌
		noboolalpha :  0, 1로 출력하게 해줌

		! : not연산자 (연산자 : operater)
		!true = false
		!false = true

		bool 변수 입력할 때
		-> 0, 1 로만 입력하기

		if 문에서
		조건에 0을 넣으면 false, 1 이상인 값을 넣으면 true
	*/

	return 0;
}