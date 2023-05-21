#include <iostream>
#include <list>
using namespace std;

#pragma region "stl list 사용법"
int main()
{
	// list 선언 
	list <int> l1;
	list <int> l2(5, 3); // 5개의 원소를 3으로 초기화
	list <int> l3{2,4}; // 2, 4로 초기화

	// 값 추가
	l3.push_front(1); // 리스트의 맨 앞에 값 추가
	l3.push_back(5); // 리스트의 맨 끝에 값 추가
	list<int>::iterator iter = l3.begin(); // 반복자가 첫번째 값을 가리킴
	iter++; // 두번째 값 가리킴
	iter++;// 세번째 값 가리킴
	l3.insert(iter, 3); // 반복자가 가리키는 곳에 값 추가

	for (auto n : l3)
	{
		cout << n;
	}
	cout << endl;

	// 값 삭제 
	l3.pop_front(); // 리스트 맨 앞 삭제 
	l3.pop_back(); // 리스트 맨 뒤 삭제
	cout << l3.size() << endl; // 리스트에 들어 있는 원소 개수 반환
	cout << l3.empty() << endl; // 리스트가 비어있으면 1, 아니면 0 반환
	l3.erase(iter); // 반복자가 가리키는 곳을 제거하고 그 다음 원소의 위치를 반환

	for (auto n : l3)
	{
		cout << n;
	}

}
#pragma endregion