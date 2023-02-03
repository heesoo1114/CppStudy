#include <iostream>

using namespace std;

// 1byte = 8bit

int main()
{
	#pragma region Character
	
	// ���ڿ�, (+����)

	char Character_a = 65; // �ּ� 1byte (8bit) (�ѱ� ��� �Ұ���)
	char16_t Character_b;; // �ּ� 2byte (16bit) (�ѱ� ��� ����)
	char32_t Character_c;; // �ּ� 4byte (32bit)
	wchar_t Character_d; // char ������ ǥ���� �� �ִ� �ִ� ũ���� ���ڼ�Ʈ
	/*
		char�� ���ڿ� ����

		char�� �����̱⵵ �� (Integer) (-> sigend char)
		-> ASCII�� �����ϱ� ���� (char ���� char_a ��½� A ���)

		wchar_t ������ *�����ڵ�*�� �����ϴ� �� ���Ǵ� 16��Ʈ ���̵� ���ڸ� ��Ÿ��
	*/
	
	#pragma endregion

	#pragma region Integer
	
	// ����

	// signed (-, 0, +)

	signed char Integer_a; // �ּ� 1byte (8bit), char�� ���� ũ��
	short Integer_b; // �ּ� 2byte (16bit), char���� ���� ����
	int Integer_c; // �ּ� 2byte (16bit), short���� ���� ����, ��κ��� 4byte
	long Integer_d; // �ּ� 4byte (32bit), int���� ���� ����
	long long Integer_e; // �ּ� 8byte (64bit), long���� ���� ���� 


	// unsigned (0, +)

	unsigned char IntegerU_a; // �ּ� 1byte (8bit), char�� ���� ũ��
	unsigned short IntegerU_b; // �ּ� 2byte (16bit), char���� ���� ����
	unsigned int IntegerU_c; // �ּ� 2byte (16bit), short���� ���� ����, ��κ��� 4byte
	unsigned long IntegerU_d; // �ּ� 4byte (32bit), int���� ���� ����
	unsigned long long IntegerU_e; // �ּ� 8byte (64bit), long���� ���� ���� 

	
	/*
		signed�� unsigned

		- signed�� ���� ����, unsigned�� ������ �������� ����
		- unsigned�� signed���� ����
		- ����Ǵ� ����� ���� �ٸ�
		- signed�� ������ ���������� unsigned�� ������ �Ұ���
	*/

	#pragma endregion

	#pragma region Floating-point
	
	float Float_a; // 4byte (32bit) (1.0f)
	double Float_b; // 8byte (64bit) 
	long double Float_c; // 16byte (128bit)

	// ���κ��� ũ�Ⱑ ���� �ֵ麸�� ��Ȯ���� ����

	#pragma endregion

	#pragma region �������ʱ�ȭ�����ũ�ⱸ�ϱ�

	bool bV = false;
	char chV = 65;
	float fV = 3.141592f; // f�� ���� ������ double�� �ν�
	double dV = 3.141592;

	auto aV = 3.141592; // aV�� double ������ �ڵ��ν�
	auto aV2 = 3.141592f; // aV2�� float ������ �ڵ��ν�


	// sizeof : ������ ������ ũ�⸦ �˷��ִ� �Լ�
	cout << sizeof(aV) << endl; // double �����̹Ƿ� 8 ���
	cout << sizeof(aV2) << endl; // float �����̹Ƿ� 4 ���

	#pragma endregion

	#pragma region �پ����ʱ�ȭ���

	int a = 123;
	// copy initialization
	// ���� �⺻���̰� ���� ����ϴ� �ʱ�ȭ ���

	int b(123); 
	// direct initialization
	// �߸��� ���� �־ ����ȯ�� ����

	int c{ 123 }; 
	// uniform initialization
	// �߸��� ���� �־ ����ȯ�� ������ ����

	int d = (int)3.141592; // -> 3
	int e((int)3.141592); // -> 3
	// �� �տ� �Ұ�ȣ �ȿ� ������ Ÿ���� ���ָ� ����ȯ�� ����
	// -> ���� ������ Ÿ�Կ��� ū ������ Ÿ�����δ� ����ȯ�� �Ұ���

	int k, l, m = 2;  // k, l�� 2�� �ʱ�ȭ�� �ȵ�. m�� 2�� �ʱ�ȭ��
	int a1 = 1, a2, a3; // �ʱ�ȭ ���� �ʴ� �������� �ڿ��� ���ִ� ���� ����

	#pragma endregion

	return 0;
}