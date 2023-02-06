#include <iostream>

using namespace std;

namespace a
{
	int my_var = 123;
	char aa = 'a';
}

namespace b
{
	int my_var = 123;
	char bb = 'b';
}

int main()
{
	using namespace std;

	#pragma region 에러상황

	using namespace a;
	using namespace b;

	cout << my_var << endl; // 에러코드
	/*
		현재 my_var은 namespace a와 b에 같은 이름으로 선언되어 있음
		23, 24번째 줄에서 namespace a와 b 모두 가져와 사용중

		main에서 사용하는 my_var은 a와 b 중 누구의 my_var인지 알 수 없음

		+ 앞에 namespace명:: 으로 구분해 줄 수 있지만 그러면 using문을 사용하는 의미가 없음 
	*/

	cout << aa << endl; // 에러 발생 X
	cout << bb << endl; // 에러 발생 X
	// aa, bb는 각자의 네임스페이스를 구분할 수 있어서 에러가 발생하지 않음

	#pragma endregion

	#pragma region 해결방안

	{
		using namespace a;
		cout << my_var << endl; // 에러가 발생하지 않음
		/*
			using문이 { } 를 기준으로 작동

			따라서 해당 중괄호 범위 안에서는 a의 my_var이라는 사실을 명확하게 알 수 있음
		*/
	}

	{
		using namespace b;
		cout << my_var << endl;  // 에러 발생하지 않음
		/*
			using문이 { } 를 기준으로 작동

			따라서 해당 중괄호 범위 안에서는 b의 my_var이라는 사실을 명확하게 알 수 있음
		*/
	}

	// + 중괄호 밖에 더 큰 범위에 있는 using문도 영향을 받음

	#pragma endregion

	// 전역으로 선언하는 using문은 좋지 않음
	// ex : 헤더 파일같이 많이 include 되는 파일에 using문을 전역으로 넣으면 에러 발생 확률 증가

	return 0;
}