using namespace std;
#include <iostream>

int main()
{
	#pragma region 출력

	string myName = "YoonHeesoo";

	cout << "My name is " << myName << endl;
	// My name is YoonHeesoo 출력

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;
	/*	abc     def 출력
		ab      cdef 출력

		\t : 탭, 위와 같이 열 맞춤의 느낌을 들게 해줌
	*/

	cout << "abc\n" << "def" << endl;
	/*
		abc
		def 출력

		\n : 줄바꿈 (endl과 유사)
	*/

	cout << "\a" << endl;
	// \a : 오디오 소리 출력

	#pragma endregion

	#pragma region 입력

	int x = 1;
	cin >> x;
	// 입력한 값이 x에 대입
	
	cout << x << endl;

	#pragma endregion

	return 0;
}
