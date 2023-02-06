#include <iostream>

using namespace std;

int value = 123; // 전역 변수 value 선언

int main()
{
	/*
		<전역 변수> 
		- main 함수 밖에서 선언된 변수
		- 어떤 { } 안에서도 귀속되있지 않음
		- 프로그램이 종료할 때 사라짐 (지속 기간 없음)
		- 많이 쓰는 것은 좋지 않음

		<전역 변수의 종류>
		static 전역변수 : 해당 cpp 파일 내에서만 사용 가능
		extern 붙은 전역변수 : 다른 cpp 파일에서도 사용이 가능함과 동시에 메모리도 공유됨
	*/

	cout << value << endl; // 123 출력

	int value = 1;

	cout << value << endl; // 1 출력
	cout << ::value << endl; // 123 출력

	return 0;
}