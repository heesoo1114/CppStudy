#include <iostream>

int main()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;
	// 3 ���

	int y = x;
	std::cout << y << std::endl;
	// 3 ���

	std::cout << x + y << std::endl;
	// 6 ���
	std::cout << x << std::endl;
	// 3 ���

	int z;
	std::cout << z << std::endl;
	// ���� -> �ʱ�ȭ ����� ��

	return 0;
}
