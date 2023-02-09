#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); // RAND_MAX : 난수를 생성해서 나올 수 있는 가장 큰 숫자. (매크로)
	// 나눗셈은 느리기 때문에 나눗셈을 한 번만 실행하게 static으로 해줌
	// 상수로 설정해서 값을 유지시킴

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction)); 
	// 난수와 fraction을 곱해서 0 ~ 1 사이의 난수로 만들자
	// 또 (max - min + 1) 와 곱해서 0 ~ (max - min + 1) 사이의 난수로 만들자
	// 다음 형 변환
	// 후 최솟값 더해주기
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0))); // seed값 설정

	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(10, 30) << "\t";

		if (count % 5 == 0) cout << endl;

		return 0;
	}

	// 이를 더 쉽게 하는 방법
	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() %5 + 3 << "\t"; 
		// 으로 수정해주면 난수를 5로 나눈 나머지는 0 ~ 4 사이가 나오고 거기에 3을 더해준 9 ~ 13 사이가 나오게 됨

		if (count % 5 == 0) cout << endl; 
	}
}