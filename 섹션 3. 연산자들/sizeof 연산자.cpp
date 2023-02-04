#include <iostream>

using namespace std;

int main()
{
	// sizeof에서 출력되는 값의 데이터 단위 : byte

	float y;
	cout << sizeof(float) << endl; // 4 출력 (4byte)
	cout << sizeof(y) << endl; // 4 출력 (4byte)
	cout << sizeof y << endl; // 4출력 (4byte)

	/*
		sizeof가 연산자인 이유
		
		- 표준에서 연산자라고 정의함
		- 변수명을 입력할 때 sizeof y 로 해도 문제가 없음
	*/

	return 0;
}