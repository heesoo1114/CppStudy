#include <iostream>
using namespace std;

#include "헤더 가드_Add.h" 
// Add 함수의 정의와 바디를 복사

#include "헤더 가드_Work.h" 
/*
	Work 함수의 정의와 바디 Add 함수의 정의와 바디를 복사
	Work.h 파일 안에 Add.h 헤더 파일을 include 했기 때문에
	Add 함수의 정의와 바디를 복사

	-> 해당 코드파일에 Add.h 헤더 파일이 이중으로 불러와져 바디가 두 번 복사됨

	헤더 파일 안에 함수 바디까지 다 정의하게 되면 생기는 문제
	- > 같은 헤더 파일의 바디 이중복사
*/

// -> 헤더가 재정의되는 문제를 해결하기 위해 헤더가드를 사용한다

int main()
{
	cout << Add(1, 2) << endl;
	Work();

	return 0;
}