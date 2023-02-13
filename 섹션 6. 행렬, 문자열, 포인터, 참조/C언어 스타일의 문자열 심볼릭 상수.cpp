#include <iostream>

using namespace std;

const char* getName() 
{
	return "Jack Jack";
}

int main()
{
	const char *name = "Jack Jack";
	const char *name2 = getName();
	const char *name3 = "Jack Kkkk";

	cout << (uintptr_t)name << endl;  // 6365464 출력
	cout << (uintptr_t)name2 << endl; // 6365464 출력
	cout << (uintptr_t)name3 << endl; // 6365466 출력
	// 문자열 상수 변수의 데이터 값이 같으면 같은 메모리를 사용

	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* name4 = "Jack Jack";

	cout << int_arr << endl;  // 006FF800 출력 (int_arr의 주소)
	cout << char_arr << endl; // Hello, World! 출력 (char_arr의 데이터 값)
	cout << name4 << endl; // Jack Jack 출력 
	// char형 배열, 포인터를 cout으로 출력하게 되면 주솟값이 아닌 문자열 내용을 출력함

	char a = 'Q'; 
	cout << &a << endl; // 처음 Q만 제대로 나오고 뒤에는 이상한 값이 출력됨
	// cout은 char형 배열, 포인터를 출력할 때 "\0"을 만날 때까지 출력해 주는데 
	// cout이 &a를 char형 포인터로 인식하고 "\0"을 기다리다가 찾지 못하니까 계속 출력하다가 오류가 발생한 거

	/*
		' ' : char, int
		" " : const char *, string, char형 배열 (문자열)
	*/

	return 0;
}