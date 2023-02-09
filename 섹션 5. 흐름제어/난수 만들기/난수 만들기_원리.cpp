#include <iostream>

using namespace std;

unsigned int PRNG()
{
	static unsigned int seed = 4444; // 아무 값을 seed값으로 설정해주자
	// 이때 seed는 static으로 해줌으로써 seed값을 메모리에 유지시켜서 
	// 처음에 함수를 호출할 때만 초기화 하고 다음에 함수를 호출할 때는
	// 전에 변경된 seed값으로 계산할 수 있게 해줌

	seed = 8235729 * seed + 2396403;  // 자료형의 크기를 뛰어넘어 overflow를 하게 해주자

	return seed % 32768; // 32768로 나누어 나머지를 반환해주자 (나머지 : 0 ~ 32767)
}

int main()
{
	for (int count = 1; count < 100; ++count) 
	{
		cout << PRNG() << "\t";  
		if (count % 5 == 0) cout << endl; 
	}
}