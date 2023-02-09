#include <iostream>
#include <ctime>
#include <cstdlib> // srand, rand

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // seed 넘버 설정
	// time 함수를 사용해서 초를 형 변환해서 seed로 설정해주자
	// 디버깅할 때는 상수로 하는 게 좋음

	for (int count = 1; count <= 100; ++count)
	{
		cout << rand() << "\t"; // seed에서 난수 생성 

		if (count % 5 == 0) cout << endl;
	}
}