#include <iostream>

using namespace std;

int main()
{
	const float compile_gravity{ 9.8 }; // ������ Ÿ�ӿ� ���� 
	constexpr float GRAVITY{ 9.77779f }; 
	// constexpr : ������ Ÿ�ӿ� �������� �˷��ִ� Ű����

	// compile_gravity = 1.2; (�����ڵ�) -> ����� ������ �Ұ���

	float number;
	cin >> number;

	const float runtime_gravity(number); // ��Ÿ�ӿ� ����
	// runtime_gravity ������ constexpr Ű���带 ����� �� ���� ���� : ���� ��Ÿ�ӿ� �����Ǳ� ���� 

	/*
		- const ����� ������ �ʱ�ȭ
		- const ����� ���� �Ұ���
		- �Լ� �Ű��������� const�� �ٿ��� �Ű����� ���� ������Ű�� ���� ����
		- const ����� ������Ͽ� ��Ƶδ� �͵� ����
		- C++���� #define ��ũ�� �� ���� ����
	*/

	return 0;
}