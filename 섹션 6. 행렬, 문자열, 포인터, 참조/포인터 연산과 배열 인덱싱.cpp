#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	// uintptr_t : 주소가 정수로 나옴
	cout << uintptr_t(ptr - 1) << endl; // ex. 9697600 출력
	cout << uintptr_t(ptr) << endl;		// ex. 9697604 출력
	cout << uintptr_t(ptr + 1) << endl; // ex. 9697608 출력
	cout << uintptr_t(ptr + 2) << endl;	// ex. 9697612 출력

	// int형 포인터에 1을 더해주면 주솟값이 4byte 증가, 1을 빼주면 4byte 감소
	// double형 포인터에 1을 더해주면 주솟값이 8byte 증가, 1을 빼주면 8byte 감소

	// 주솟값은 데이터 타입의 크기에 따라 차이가 남

	int list[] = { 1, 3, 5, 7, 9 };
	int listLength = sizeof(list) / sizeof(int); // 20 / 4 = 5
	int	*lptr = list;

	// 배열 인덱싱
	for (int i = 0; i < listLength; ++i)
	{
		// cout << list[i] << " " << uintptr_t(&list[i]) << endl;
		cout << *(lptr + i) << " " << uintptr_t(lptr + i) << endl;
	}

	return 0;
}