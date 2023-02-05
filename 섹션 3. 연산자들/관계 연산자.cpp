#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
		관계 연산자의 종류

		(A 관계연산자 B)

		== : A와 B가 같은가
		!= : A와 B가 같지 않은가
		> : A가 B보다 더 큰가
		< : A가 B보다 작은가
		>= : A가 B보다 크거나 같은가
		<= : A가 B보다 작거나 같은가

		결과값은 bool 타입으로 저장
	*/

	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99); // 0.001

	/*
		d1과 d2를 비교해 보면 같지 않다고 나옴
		컴퓨터는 딱 떨어지는 십진수 소수를 구현할 수 없음
		그래서 컴퓨터는 이진수의 조합들로 십진수에 가깝게 만듬
		d1과 d2의 오차를 출력해보면 5.32901e - 15 이라는 미세한 오차가 출력됨

		이 문제를 해결하기 위해서는 엡실론 값을 이용해야 함
	*/

	#pragma region 엡실론값

	double f1(100 - 99.99); // 0.001
	double f2(10 - 9.99); // 0.001

	const double epsilon = 1e-15; // 오차범위 설정

	if (std::abs(f1 - f2) < epsilon) // f1과 f2의 차이의 절댓값이 설정한 오차범위 보다 작으면 
	{
		cout << "Approximattely qual" << endl;
	}
	else // f1과 f2의 차이의 절댓값이 설정한 오차범위 보다 크면
	{
		cout << "Not equal" << endl;
	}
	
	#pragma endregion

	return 0;
}