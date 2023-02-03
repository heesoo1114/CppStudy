#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// 부동소수점수 (floating point numbers)

int main()
{	
	/*
		영역			 형			최소크기		전형적인 크기
	Floating point		float		 4byte			   4byte
						double		 8byte			   8byte
					 long double	 8byte			8, 12, or 16 byte
	*/

	#pragma region float의내부

	/*
		0000011111000000000000000000000

		float의 크기는 4byte = 32bit 이므로 총 32자리

		- 부호 비트
		부호 비트 맨 앞 1자리
		0이므로 양수

		- 지수 비트
		00000111 총 8자리
		오른쪽부터 세 번째 자리부터 첫 번째 자리까지 1이므로 (오른쪽부터 2^num++) (num = 0)
		00000111 = 첫 번쨰 자리의 2^0(1) + 두 번째 자리의 2^1(2) + 세 번쨰 자리의 2^2(4) = 7

		- 가수 비트
		11000000000000000000000 총 23자리
		왼쪽부터 두 번째 자리까지 1이므로 (왼쪽부터 2^num--) (num = -1)
		11000000000000000000000 = 첫 번째 자리의 2^-1(0.5) + 두 번째 자리의 2^-2(0.25) = 0.75


		+(1 + 0.75) * 2^(7 - 127) = +1.316554 * 10^-36
		- +(1 + 0.75) : 가수 비트 십진수 값에 1 더해주기
		- 2^(7 - 127) : 지수 비트 십진수 값에 127 빼주기 (뺴주는 이유 : 32bit 기준 메모리에 값을 저장할 때의 규칙) 
	*/

	#pragma endregion

	#pragma region limit구하기

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::lowest() << endl;

	// min : 가장 작은 절대값
	// lowest : 음수 포함해서 가장 작은 값

	#pragma endregion

	#pragma region 다양한표현방법

	float f(3.14);
	// f를 입력하지 않았고 소괄호를 사용하였기 때문에 float에서 double로 자동으로 형변환 해줌

	float f2{ 3.14 };
	// 대괄호를 사용하였기 때문에 형변환 해주지 않음

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl; // 3.14 출력
	cout << 31.4e-2 << endl; // 0.314 출력
	cout << 31.4e1 << endl; // 3.14 출력
	cout << 31.4e2 << endl; // 3.14 출력

	/*
		e-1 = 10^-1 = -0.1 
		e-2 = 10^-2 = -0.01
		e1 = 10^1 = 10
		e2 = 10^2 = 100
	*/

	#pragma endregion

	#pragma region 자리수지정

	cout << setprecision(16);
	cout << 1.0 / 3.0 << endl;
	// 82번째 줄 없으면 0.33333 출력
	// 82번째 줄 있으면 0.3333333333333333 출력
	// setprecision 함수를 호출하여 16자리까지


	double d(0.1);

	cout << d << endl; // 0.1 출력 
	// 0.1이 떨어지는 수가 아니기 때문에 내부에서 0.1에 최대한 가깝게 만든 거
	cout << std::setprecision(12); // 자리 17자리까지 지정
	cout << d << endl; 
	// 17자리로 1에 (이진수들의 합으로) 최대한 가까운 수를 출력
	// 0.1000000000000001


	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << std::setprecision(17); // 자리 17자리까지 지정
	cout << d1 << endl; // 1.0 -> 이진수로 변환 -> 1 출력
	cout << d2 << endl; // 0.99999999999999999 출력
	// 0.1을 이진수로 표현을 한 후에 더해줌
	// 1은 이진수로 딱 떨어지지만 계속 더해주는 0.1은 딱 떨어지지 않기 때문에 이진수로 최대한 1에 가깝게 표현한 거
	#pragma endregion

	#pragma region 실수표현의원리

	/*
		실수 표현의 원리

		이진수로 만들기 때문에 최대한 가깝게 표현
		딱 떨어지는 이진수 소수라면 정확함
		0.1 과 같이 십진수 소수라면 이진수의 합을 조합해서 가깝게 만드는 거
		정밀도가 높을수록 최대한 가깝게 만들어짐
	*/

	#pragma endregion


	return 0;
}