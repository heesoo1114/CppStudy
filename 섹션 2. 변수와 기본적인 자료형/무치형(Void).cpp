#include <iostream>

using namespace std;

int main()
{
	/*
		void는 파라미터가 없음, 반환형이 없음을 뜻함
		void는 메모리를 차지하지 않음

		+ 파라미터 : 함수 호출 시 함수에 전달되는 값 (매개변수로 보내는 인수)
	*/

	void a; // 에러
	// void는 메모리를 차지하지 않기 때문에 변수 선언을 할 수 없음

	void* ptn;
	// void * 포인터는 메모리를 차지 하기 때문에 변수를 선언할 수 있음
	// 다른 데이터 타입의 포인터도 (void*)로 형변환 가능

	return 0;
}