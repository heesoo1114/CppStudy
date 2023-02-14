#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

// my_arr을 참조 변수로 선언을 안 하면 배열의 내용을 전부 복사해 오기 때문에 비효율적
// my_arr을 참조 변수로 선언해 주면 복사할 필요가 없도록 하는 것이 효율적
void printLength(array<int, 5> &my_arr) 
{
	cout << my_arr.at(0) << endl; // 2 출력
}

int main()
{
	// 정적 배열은 배열의 크기가 컴파일 타임에 결정될 수 있도록 해줘야 하므로 배열의 크기를 꼭 지정해 주어야 함 (변수는 넣어줄 수 없음)
	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	// -> int array[5] = { 1, 2, 3, 4, 5 };

	my_arr = { 2, 3, 4, 5, 6 }; // 정적 배열이지만 array로 선언된 정적 배열은 다른 배열로 초기화가 가능함

	cout << my_arr[0] << endl;		// 2 출력 (my_arr의 0번째 원소 반환)
	cout << my_arr.at(0) << endl;	// 2 출력 (my_arr의 0번째 원소 반환) (at함수를 사용하면 인덱스를 벗어난 수를 입력했을 때 예외처리 발생)
	cout << my_arr.size() << endl;	// 5 출력 (my_arr의 원소 개수 반환)

	printLength(my_arr);
	// 일반적인 정적 배열은 매개변수로 보낼 수 없음
	// 하지만 array로 선언된 정적 배열은 매개변수로 보낼 수 있음

	#pragma region 정렬
	
	array<int, 5> arr = { 1, 5, 3, 2, 4 };

	for (int arr : arr) // int를 auto로 해주고 arr을 참조변수로 해줄 수 있음
	{
		cout << arr << " ";
	}
	cout << endl;

	sort(arr.begin(), arr.end()); // sort(시작범위, 끝범위) 시작범위 부터 끝범위 까지 정렬해 줌
	// begin : 배열의 첫 번째 원소 위치
	// end : 배열의 마지막 원소 위치
	// rbegin, rend : 역방향 반복자 (내림차순으로 정렬할 때)

	for (int arr : arr) // int를 auto로 해주고 arr을 참조변수로 해줄 수 있음
	{
		cout << arr << " ";
	}
	cout << endl;

	#pragma endregion

	return 0;
}