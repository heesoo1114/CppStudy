#include <iostream>
#include <typeinfo>

using namespace std;

enum Color
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3

	/*
		- ������ �� ������ ������ �� �� ����
		- �Ʒ��� ������ +1�� �Ǽ� �����
		- ���������� ������ ����
		- ���� ������ ������ �� ���� ����
		- �ٸ� enum �����̾ �������� ������ �� ��
		- enum ������ �о���� �� ������ ������ ����
		- �Է¹޾Ƽ� ������ ������ �� �� ����
	*/
};

enum class Color2
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3
};

enum class Color3
{
	COLOR_BLACK, // 0
	COLOR_RED, // 1
	COLOR_BLUE, // 2
	COLOR_GREEN, // 3
};

int main()
{
	Color a = COLOR_BLACK; // paint �� ���������δ� 0�� ���� ��
	Color b(COLOR_BLUE); // house�� ���������δ� 2�� ���� ��
	Color c{ COLOR_RED }; // apple�� ���������� 1�� ���� �� 

	cout << c << endl; // 1 ���

	Color ex1 = -3; // �����ڵ� (�ڷ����� �ٸ� Color != int)
	int color_id = COLOR_RED;  // �о���� �� ���� (2 ��)

	Color ex2 = color_id; // �����ڵ� (�ڷ����� �ٸ�)
	Color ex3 = static_cast<Color>(-3); // 2�� Color �ڷ������� �� ��ȯ�� ���ָ� ����

	#pragma region ������Ŭ����

	Color2 c1 = Color2::COLOR_BLACK; // ���������� 0�� ������ ����
	Color3 c2 = Color3::COLOR_BLACK; // ���������� 0�� ������ ����

	/*
		enumclass�� ����ϸ� ���� 0�� ������ �־ 
		enum�� ������ �����ϰ� ���� ���� ������ ��

		�׷��� int�� �� ��ȯ�� ���ָ� ������ �� ���ٰ� ����
	*/

	#pragma endregion

	return 0;
}