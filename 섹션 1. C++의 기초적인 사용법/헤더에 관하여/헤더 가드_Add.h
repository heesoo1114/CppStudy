// #pragma once : 헤더 파일 전체의 재정의를 막는 헤더 가드

/*
	정의가 되어 있는지 없는지를 확인 
	
	-> 정의가 되어 있지 않으면 ifndef 부터 endif 범위까지 복사를 허용
	-> 정의가 되어 있으면 복사를 허용하지 않음
*/

#ifndef MY_ADD // MY_ADD가 정의 되어 있는지 없는지를 확인 ( if not define )

#define MY_ADD 
// MY_ADD 정의
// 정의가 되어 있기 때문에 다음에 ifndef에서 걸러지고 재정의가 되지 않음

int Add(int a, int b)
{
	return a + b;
}

#endif