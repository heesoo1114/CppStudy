#include <iostream>
#include <random>

using namespace std;

int main()
{
	random_device seed; // seed값 설정해주자 (자동으로 계속 바뀌게 해줌)

	mt19937_64 mersenne(seed()); // 난수 생성 알고리즘 (mersenne : 알고리즘 이름)
	uniform_int_distribution<> dice(1, 6); // 1 ~ 6 사이의 수를 랜덤으로 만듦 (각 숫자가 나올 확률은 동일)

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl; // 같은 확률로 난수 생성

	return 0;
}