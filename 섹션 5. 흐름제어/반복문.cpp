#include <iostream>

using namespace std;

int main()
{
	#pragma region for

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " "; // 1 2 3 4 5 출력
	}

	/*
		for ( A; B; C)
		{
			D
		}

		실행순서 : A B D C B D C B D C

		역할
		A : 반복자 초기화
		B : 반복 조건 확인
		C : 다음 반복시 반복자 변화
		D : 내용

		+ ABC 3개가 다 필요하지는 않음
	*/

	#pragma endregion

	#pragma region while

	while (true) // 반복조건
	{
		// 내용
	}

	unsigned int count = 5;

	while (count >= 0)
	{
		cout << count << endl;
		count--;
	}
	/*
		unsigned int의 범위에 음수는 포함되지 않음
		count가 점차 감소되면서 0에서 감소되면 순환되어 unsigned int가 표현할 수 있는 양수 최댓값으로 감
	*/

	#pragma endregion

	#pragma region dowhile

	int a = 10;
	int b;

	do
	{
		cout << "a보다 크게 b의 값을 입력해주세요." << endl;
		cin >> b;
	} while (a >= b);

	
	// do는 무조건 한 번 이상은 반복적으로 실행됨

	#pragma endregion

	#pragma region goto
	
	int y;

	Again : // 이 위치로 이동

	cout << "y값을 입력해주세요." << endl;
	cin >> y;

	if (y < 0)
	{
		goto Again; // Again 라벨이 있는 위치로 이동함
	}

	cout << y << endl;

	#pragma endregion

	#pragma region jump

	/*
		break : 해당 반복문 하나를 탈출
		continue : 건너뛰고 다음 반복으로
	*/

	int c = 0;

	do
	{
		if (c == 5)
		{
			continue; // 아래 내용들을 건너뛰고 다음 반복으로 감
			// 그러면 c 값이 5로 계속 유지됨
			// -> 무한루프
			// 해당 문제를 해결하기 위해 while 조건식에서 while (++c < 10) 으로 하기도 함
		}

		cout << c << endl;  
		c++;
	} while (c < 10);

	#pragma endregion

	return 0;
}