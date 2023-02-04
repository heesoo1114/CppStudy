#include <iostream>

using namespace std;

int main()
{
	// 우선순위는 다 외울 수 없기 때문에 괄호로 지정

	#pragma region 우선순위차이가있을때

	cout << 4 + 2 * 3 << endl;
	// 10 출력
	// 기본적으로 * 가 + 보다 우선순위가 높음

	cout << 4 + (2 * 3) << endl;
	// 10 출력
	// * 는 소괄호를 사용하여 우선순위를 높여주어도 
	// 기본적으로 * 가 + 보다 우선순위가 높기 때문에 위와 결과가 같음

	cout << (4 + 2) * 3 << endl;
	// 18 출력
	// + 가 * 보다 우선순위가 낮지만 소괄호를 사용하여 우선순위를 높여줌
	// 따라서 소괄호 안부터 먼저 계산을 하고 넘어감

	#pragma endregion

	#pragma region 우선순위차이가없을때

	cout << 4 * 2 / 4 << endl;
	// * 와 / 는 우선순위가 같음
	// 우선순위가 같을 때는 Associativity를 확인하여 계산
	// * 와 / 의 Associativity는 Left-to-right이기 때문에 왼쪽 * 부터 계산을 하고 넘어감

	#pragma endregion

	// Associativity에는 Left-to-rigit, Right-to-left 두 가지 종류가 있음
	// Left-to-rigit는 왼쪽부터 우선순위를 매겨서 계산하는 거, Right-to-Left는 오른쪽부터 우선순위를 매김

	return 0;
}