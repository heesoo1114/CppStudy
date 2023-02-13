#include <iostream>

using namespace std;

struct Mystruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void DoSomething(Mystruct myStr)
{
	cout << sizeof((myStr).array) << endl; // MyStruct의 멤버 변수 array의 크기 20 출력
}

void PrintArrary(int array[5]) // int array[5] = int *array (포인터임)
{
	cout << *array << endl; // 9 출력 
	*array = 100;
}

int main()
{
	// 배열 이름은 변하지 않는 포인터와 마찬가지 

	int array1[5] = { 9, 7, 5, 3, 1 };

	cout << array1 << endl; // 배열의 첫 번째 원소의 주소 출력 (포인터와 마찬가지)
	cout << &array1[0] << endl; // 배열의 첫 번째 원소의 주소 출력
	// array1 = &arrat1[0]

	cout << *array1 << endl; // 9 출력
	// array1은 배열의 첫 번째 원소의 주소를 가지고 있음
	// 따라서 array1을 역참조하면 9가 나옴

	char name[] = "heesoo";

	cout << *name << endl; // h 출력
	// name은 배열의 첫 번째 원소의 주소를 가지고 있음
	// 따라서 name을 역참조하면 h가 나옴

	int *ptr = array1;
	cout << ptr << endl; // array1의 주솟값 출력
	cout << *ptr << endl; // 9 출력

	PrintArrary(array1); // array1의 주솟값 넘김
	PrintArrary(ptr); // ptr = array1의 주솟값

	cout << *array1 << endl; // 100 출력

	Mystruct myStr;
	DoSomething(myStr);
	// 구조체에 있는 배열은 포인터로 전환되지 않고
	// 배열이 그대로 넘어감

	return 0;
}