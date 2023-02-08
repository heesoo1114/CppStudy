#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	#pragma region �Ͻ�������ȯ
	
	int a = 123.0;
	// ���� a�� 123.0���� double���� �Ҵ����ְ� �ִµ� ������ �߻����� �ʰ� �ִµ� ���ϱ�?
	// �����ڰ� �� ��ȯ�� �������� �ʾҾ �����Ϸ��� �� ��ȯ�����־��� ������
	// ���������� double�� 123.0�� int�� 123���� �� ��ȯ�ؼ� a�� �־���

	cout << a << " " << typeid(a).name() << endl; // 123 int ���

	#pragma endregion

	#pragma region ���������ȯ

	int b = (int)4.0; // ��ȣ�� ������ Ÿ���� �־��༭ �����ڰ� �� ��ȯ ��Ŵ
	b = static_cast<int>(4.99); // static_cast<������Ÿ��> �� �ۼ�

	cout << b << endl; // 4 ���

	#pragma endregion

	#pragma region ���ǻ���
	
	float value = 0.123456789;
	cout << value << endl; // 0.123456791043 ���
	/*
		������ Ÿ���� ū �Ϳ��� ���� ������ ��ȯ ��Ű�� ������ ������ ������
		���� �Ϳ��� ū ������ ��ȯ ��ų ������ ������ �ս��� �߻��ϱ� ������ �̻��� ���� ���� �� ����
	*/

	cout << 5 - 10; // -5 ���
	cout << 5u - 10; // �̻��� �� ���
	/*
		�� ��ȯ������ �켱������ ����

		unsigned int - int ���� �� ��ȯ�� �� ��
		unsigned int�� int ���� �켱������ �� ���� ������
		5u�� �������� �� ��ȯ���� �ϰ� ��

		-> �� �� -5�� �����ε� unsigned int�� ������ ���Ե��� ���� 
	*/

	#pragma endregion

	return 0;
}