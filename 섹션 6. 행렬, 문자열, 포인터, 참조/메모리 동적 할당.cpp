#include <iostream>

using namespace std;

int main()
{
	#pragma region 동적으로할당
	
	int* ptr = new int{ 7 }; // 같은코드 : int val = 7;
	// int형 크기만큼 힙 메모리를 할당 받아와서 주소를 반환

	cout << ptr << endl; // 0127E5A0 출력 
	cout << *ptr << endl; // 7 출력

	#pragma endregion

	#pragma region 메모리반납
	
	int *ptr2 = new int{ 5 };

	cout << ptr2 << endl; // 주솟값 출력
	cout << *ptr2 << endl; // 5출력

	delete ptr2; // ptr2가 가지고 있는 힙 메모리 영역 반납
	// delete를 하면 해당 포인터가 가리키고 있는 영역이 사리 지기 때문에
	// 추후에 어떤 에러가 발생할지 모르기 때문에
	// delete 해준 포인터를 nullptr로 초기화해 주는 것을 권장함

	cout << ptr2 << endl; // 주솟값 출력 (변함 X)
	cout << *ptr2 << endl; // 이상한 값 출력 (ptr2가 가리키고 있는 영역이 지워져서 간접 참조를 할 수 없게 됨)

	#pragma endregion

	#pragma region 메모리누수
	
	while (true)
	{
		// 두 번째 반복부터 기존의 ptr이 사라지면서
		// 기존에 있던 ptr에 할당된 메모리 영역이 쓸모가 없게 됨
		// 이것이 연속적으로 발생하면 메모리 누수 문제가 발생하게 됨

		int* ptr = new int; // 반복문에서 ptr 선언, ptr에 힙 메모리 영역 할당
		cout << ptr << endl;

		delete ptr;
		// 메모리 누수 문제를 해결하기 위해서 
		// ptr에 할당된 힙 메모리 영역을 반납 시킴으로써 메모리 누구 문제를 방지함
	}

	#pragma endregion

	return 0;
}