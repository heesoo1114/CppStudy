#include <iostream>

using namespace std;

// �Լ��� ��ȯ������ auto ��� ����
// �Ű��������� auto �Ұ��� -> �ڷ��� �߷� �Ұ�
// �Լ� ���� �޺κп� ( -> �ڷ��� )�� �������ν� ��ȯ��, �Ű����� �ڷ��� �� �������� ������ 
auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	auto a = 123;
	auto a; // �����ڵ� 
	// auto ������ a�� �ʱ�ȭ ������ �ʾƼ� ���� �߻�
	// -> �����Ϸ��� �ڷ��� �߷��� �� �� ��� �� �ʱ�ȭ�� �ʼ���

	auto result = add(1, 2);
	// add�� ��ȯ���� int�� �ǹǷ� result ���� int�� ��

	return 0;
}