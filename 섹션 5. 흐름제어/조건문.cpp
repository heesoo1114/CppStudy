#include <iostream>

using namespace std;

int main()
{
	#pragma region if

	int a = 5;

	if (a >= 5)
	{
		cout << "a is bigger than 5" << endl;
	}
	else if (a == 0)
	{
		cout << "a is 0" << endl;
	}
	else // (a <= 5) 라는 조건식이 숨겨져 있다고 생각하면 됨 (해당 else의 짝꿍 if문 조건식의 반대)
	{
		cout << "a is smaller than 5" << endl;
	}

	#pragma endregion

	#pragma region switch

	int b = 2;

	switch (b)
	{
		case 1: 
			cout << "b is 1" << endl;
			break;
		case 2:
			cout << "b is 2" << endl;
			break; // 여기 break이 없었다면 case3까지 실행됨
		case 3:
			cout << "b is 3" << endl;
			break;
		default: // 앞에서 정의한 case 이외의 경우일 때
			break;
	}

	#pragma endregion

	#pragma region 주의사항

	int x = 3;

	switch (x)
	{
		int a;
		int b = 1; // 에러코드 (case를 시작하기 전에는 변수를 선언은 가능하지만 초기화를 할 수 없음)

		/*
			변수 선언은 switch에서 유지가 되지만 변수에 할당된 값은 해당 case에서만 유지됨 
		*/

		case 0:
			a = 0; // case 안에서는 변수 초기화가 가능함
			int c; // 변수 선언 또한 가능함
			c = 1;
			break;
		case 2:
			cout << c << endl; 
			// case0에서 선언된 변수 c를 사용할 수는 있지만 c에 1을 할당해 준 것은 모르기 때문에 쓰레기 값이 출력됨
			break;
		case 3:
			cout << x << endl;
			// 바깥에서 선언된 x는 잘 작동
			break;
		default:
			break;
	}

	#pragma endregion

	return 0;
}