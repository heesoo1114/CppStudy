#include <iostream>

using namespace std;

int main()
{
	/*
		지역변수

		범위 : { }
		같은 범위 내에서 같은 이름의 변수는 존재할 수 없음

		{	
			int a = 1;
			int a = 2; (에러코드)
		}

		함수는 함수이름, 매개변수, 리턴타입이 모두 같아야 동일한 함수가 됨
		같은 범위 내에서 동일한 함수는 존재할 수 없음

		-> 이 문제를 해결(?) 풀어나가기 위해서 namespace를 유용하게 사용하면 좋음
	*/

	int apple = 3;  // 이 apple 과 

	cout << apple << endl;

	{
		apple = 1;  // 이 apple은 24번째 줄에서 선언한 3이 할당되어 있는 apple
		int apple = 2; // 이 apple은 해당 중괄호 안에서만 사용될 수 있는 2가 할당되어 있는 apple

		cout << apple << endl; // 2 출력
		// 중괄호 안에서는 밖에서 선언된 apple 보다 안에서 선언된 apple을 우선시 여김
	}

	cout << apple << endl; // 1 출력
	// 중괄호를 벗어났으니 중괄호 안의 apple은 사라지고, 중괄호 안에서 1을 할당해 준 apple이 출력됨

	return 0;
}