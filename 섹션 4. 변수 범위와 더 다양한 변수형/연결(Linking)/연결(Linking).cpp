#include <iostream>
#include "연결(Linking)_Constants.h"

using namespace std;

/*
	extern이 생략된 extern 전역변수 : 다른 파일에서 사본으로 씀 (별개의 메모리) 
	extern이 붙어있는 extern 전역변수 : 다른 파일에서도 해당 전역변수와 메모리를 공유 (동일한 메모리)
	static 전역변수 : 해당 파일에서만 사용 가능

	값이 바뀔 위험이 없는 const 전역변수들은 extern을 붙여서 계속 복사돼서 메모리 늘릴 필요 없이 메모리를 공유해서 쓰일 수 있도록 하는 것이 좋음

	<초기화 X> 
	int g_x;  // external. 다른 파일에서 사본으로 사용
	static int g_x; // internal. 다른 파일에서 사용 불가 (해당 파일 내에서만 쓰일 수 있음)
	const int g_x; // external. (에러코드) const는 꼭 초기화를 해주어야함
	extern int g_z; // 해당 파일을 include 하는 다른 파일에서 해당 변수와 메모리를 공유하게 됨
	extern const int g_z; // 해당 변수와 메모리를  공유하는 다른 파일에서 초기화 꼭 해줘야 함
	
	<초기화 O> 
	int g_y(1); // external. 다른 파일에서 사본으로 사용 
	static int g_y(1); // internal. 다른 파일에서 사용 불가 (해당 파일 내에서만 쓰일 수 있음)
	const int g_y(1); // external. 다른 파일에서 사본으로 사용 
	extern int g_w(1); // 초기화를 해주었으니 다른 파일에서 정의가 불가능 
	extern const int g_w(1);
*/

static int a = 1;
// 해당 cpp 파일에서만 사용할 수 있음

extern int b = 2; 
/*
	- extern 생략 가능
	- 초기화 해줘야 함 (초기화를 해주지 않으면 garbage값이 들어가 있어서 다른 파일에서 사용할 때 이상하게 작동함)
	- 초기화를 하는 위치는 상관 없음 
	- 초기화를 두 번해  주면 전체 파일 중에서 해당 변수이름을 가진 전역변수가 2개가 된거
	- 다른 파일에서 extern으로 선언된 전역변수 b를 사용할라면 extern을 생략할 수 없음
*/

int value = 123; 
// extern 전역변수 value 선언 

void doSomething(); // forward declaration
// extern 생략

extern int abc;
// 다른 파일에서 선언된 전역변수 abc를 사용할라면 extern을 생략할 수 없음
// extern을 생략하면 int abc; 로 해당 cpp 파일에서 새로운 전역변수 abc를 선언하는 것

int main()
{
	/*
		<링킹>

		include 한 다른 파일과 연결
		컴파일러가 링킹시 include 한 다른 파일 전체를 복사해오는 방식으로 작동
	*/

	abc++; // 3++
	cout << abc << endl; // 4출력

	doSomething(); // 123++
	cout << value << endl; // 124 출력

	doSomething(); // 124++
	cout << value << endl; // 125 출력

	return 0;
}