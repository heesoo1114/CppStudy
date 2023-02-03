#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	// 정수형 변수에 대한 자세한 설명은 기본 자료형 파일에 있음

	/*
		int i = 1; 
		를 2진수로 나타내면
		
		-> 00000000 | 00000000 | 00000000 | 00000001

		맨 앞에 있는 한 비트는 부호를 나타내는 데에 사용 
	*/

	#pragma region 오버플로우

	long long ll = numeric_limits<long long>::lowest() - 1;
	//cout << pow(2, sizeof(ll) * 8 - 1) - 1 << endl; // long long의 최댓값 9223372036854775807 출력
	//cout << numeric_limits<long long>::max() << endl; // 최댓값 9223372036854775807
	//cout << numeric_limits<long long>::min() << endl; // 최솟값 -9223372036854775808
	//cout << numeric_limits<long long>::lowest() << endl; // 최솟값 -9223372036854775808

	cout << ll << endl;
	/*
		9223372036854775807 = long long의 최댓값 출력

		분명 최솟값에서 -1을 했으니 -9223372036854775809가 나와야 되지 않나?

		최솟값에서 -1을 해주면 오버플로우가 발생해서 ll의 데이터 타입인 long long의 범위 내에서 순환하게 됨
		따라서 최솟값에서 범위를 벗어났기 때문에 최댓값으로 순환한 거

		(최댓값에서 +1을 한 상황 또한 같음)
	*/

	#pragma endregion
	
	#pragma region unsigned범위초과

	unsigned int i = -2;
	cout << i << endl;
	/*
		i = -2
		출력값은 4294967295

		분명 -1를 넣어주었는데 왜 이상한 수가 출력이 될까?

		unsigned는 0과 양수를 범위로 가지고 있어서 음수가 들어가면 이상한 값이 나옴

		-> unsigned에 음수는 넣으면 안 됨
	*/

	#pragma endregion

	#pragma region 피연산자들에의한데이터형식지정

	int v = 22 / 4; // v = 5
	cout << 22 / 4 << endl;
	/*
		22 / 4 = 5.5
		하지마 출력되는 결과는 5

		왜일까?

		데이터 타입이 지정되어 있지 않았을 때,
		피연산자들의 데이터 타입을 통해 결과값의 데이터 타입을 정해줌

		따라서 결과가 5.5가 나오게 하기 위해서는
		22 또는 4를 실수로 형 변환을 해주던가 22와 4를 모두 형변환해 주면 됨

		ex. 정수 / 정수 = 정수
			실수 / 정수 = 실수
			정수 / 실수 = 실수
	*/

	#pragma endregion

	return 0;
}