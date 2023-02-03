#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// �ƽ�Ű �ڵ忡 ���� char ���ڵ��� ���������� ������ �����Ǿ� ����

	char c1 = 65;
	char c2 = 'A'; 

	// ex1
	cout << char(65) << endl; // A ���
	cout << int('A') << endl; // 65 ���

	// ex2
	cout << static_cast<char>(65) << endl; // A ���, ������ -> ������
	cout << static_cast<int>('A') << endl; // 65 ���, ������ -> ������

	/*
		����ȯ�� �ΰ��� ���ø� �ۼ��ߴ�
		
		ex1 �� ex2�� �������� �˾ƺ���

		ex1 : ������ ����ȯ
		ex2 : ����ȯ�ϱ� ���� �����Ϸ����� ����ȯ�� �ص� �Ǵ��� ����� ��û
	*/

	#pragma region char�Է�

	char c5('A');

	cin >> c5; // abc �Է�
	cout << c5 << " " << static_cast<int>(c5) << endl; // a 97 ���
	// a�� ���������� ��ȯ�Ͽ� ���
	// char ������ 1���� ���ڸ� �޴� ������ Ÿ����
	// �׷��� a�� ������ b�� c�� ���ۿ� ��������

	cin >> c5; // �Է��� �ƴ� �Է¹��ۿ� �����ִ� b�� c5�� ����
	cout << c5 << " " << static_cast<char>(c5) << endl; // b b ���
	// ��ȯ�� Ÿ�Կ� ���ڿ��� �־��־��� b�� ���ڿ��� ��ȯ�� b�� ���
	// ���� b�� ������ c�� ���ۿ� ����

	cin >> c5; // �Է��� �ƴ� �Է¹��ۿ� �����ִ� c�� c5�� ����
	cout << c5 << " " << static_cast<int>(c5) << endl; // c 99 ���

	#pragma endregion

	cout << sizeof(char) << endl;
	cout << (int)numeric_limits<char>::max() << endl; // 127 ���
	cout << (int)numeric_limits<char>::min() << endl; // -128 ���

	/*
		\n : 
		- ����
		- �ٹٲ�

		endl :
		- �ٹٲ� 
		- ���� ����
		- �ٹٲް� ���ÿ� ���ۿ� �ִ� �͵��� ������ �� ����� �� �ٹٲ�

		flush :
		- ���� ����

		\" = "
	*/

	return 0;
}