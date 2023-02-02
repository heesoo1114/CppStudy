#include <iostream>
#include "헤더 파일 만들기_Add.h"

using namespace std;

int main()
{
	cout << Add(1, 2) << endl;

	return 0;
}

/*
	Add.h : 선언(forward declaration), 프로토타입
	Add.cp : 정의(definition), 바디

	다른 위치에 있다면 "폴더명/이름명"의 형식으로 파일 경로를 써주어야 함
*/

/*
	Add.h 헤더 파일에 함수의 프로토타입이 있고,
	Add.cp 코드 파일에 함수의 바디가 있는 상태에서
	Add.cp 파일을 삭제하여서 파일을 불러오지 못한다면?

	-> 컴파일은 성공, 헤더파일에서 프로토타입만 가져와서 검사하기 때문

	링킹 에러 : Add.cp 파일을 불러오지 못하면 함수의 바디가 무시되어 링킹이 실패 
	(문법상으로는 문제가 없지마 실행할 땐 문제가 생김)
*/