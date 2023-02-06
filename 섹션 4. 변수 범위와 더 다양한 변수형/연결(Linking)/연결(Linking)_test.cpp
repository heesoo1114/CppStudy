#include <iostream>

using namespace std;

extern int value; // 다른 파일의 전역변수 value를 사용해야 하기 때문에 extern을 생략할 수 없음

int abc = 3; // extern 전역변수 선언

extern void doSomething()
{
	value++;
}