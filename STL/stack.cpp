#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// 후입선출 (LIFO) 

	// 선언
	stack<int> s;

	s.push(0); // s에 0 삽입
	s.pop();   // s의 가장 마지막에 삽입된 데이터 삭제

	s.top();   // s의 가장 마지막에 삽입된 데이터 반환

	s.empty(); // s가 비어있으면 true 아니면 false를 반환
	s.size();  // s의 사이즈를 반환

	s.emplace(0); // push와 비슷한 역할 (불필요한 복사 또는 이동 작업을 피한다는 장점이 존재)
}
