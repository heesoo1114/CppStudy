#include <iostream>

int main()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;
	// 3 출력

	int y = x;
	std::cout << y << std::endl;
	// 3 출력

	std::cout << x + y << std::endl;
	// 6 출력
	std::cout << x << std::endl;
	// 3 출력

	int z;
	std::cout << z << std::endl;
	// 에러 -> 초기화 해줘야 함

	return 0;
}
