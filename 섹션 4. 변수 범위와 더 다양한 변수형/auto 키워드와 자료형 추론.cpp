#include <iostream>

using namespace std;

// 함수의 반환형에도 auto 사용 가능
// 매개변수에는 auto 불가능 -> 자료형 추론 불가
// 함수 선언 뒷부분에 ( -> 자료형 )을 써줌으로써 반환형, 매개변수 자료형 등 가독성을 높여줌 
auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	auto a = 123;
	auto a; // 에러코드 
	// auto 변수의 a를 초기화 해주지 않아서 에러 발생
	// -> 컴파일러가 자료형 추론을 할 수 없어서 꼭 초기화는 필수임

	auto result = add(1, 2);
	// add의 반환형은 int가 되므로 result 또한 int가 됨

	return 0;
}