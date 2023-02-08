#include <iostream>
#include <limits>
#include <string> // string�� ���� �پ��� ��� ����ϰ� ���ִ� �������

using namespace std;

int main()
{
	string a = "Hello, World";
	char a2 [] = "Hello, World";
	string a3 { "Hello, World" };

	a.length(); // a�� ���ڼ� ��ȯ (12)
	// ���ڿ� ���� "\0"�� ���� �ʴµ� 
	// char �迭�� ���� 13

	#pragma region cin�Է�

	cout << "Your name ? : ";
	string name;
	cin >> name; // yoon heesoo �Է� �� yoon�� name�� ���� ���� heesoo�� ���۷� �̵�
	cout << name << endl; // yoon ���

	cout << "Your age ? : ";
	string age;
	cin >> age; // �Է��� ���� �ʰ� ���ۿ� �����ִ� heesoo�� �����ͼ� age�� ����
	cout << "\n" << age << endl; // heesoo ���
	
	/*
		���� : cin >> ������

		- ���� ������ �Է� ����
		- �ٹٲ� ���ڴ� ���� ������ ���ۿ� ����
	*/

	// �� ������ ���ؼ� getline�� ����ϸ� ����

	#pragma endregion

	#pragma region getline

	cout << "Your name ? : ";
	string name1;
	getline(cin, name1); // yoon heesoo �Է� �� yoon heesoo �Է�

	cout << "Your age ? : ";
	string age1;
	getline(cin, age1); // 1 3 �Է� �� 1 3 �Է�

	/*
		�Լ����� : getline(�Է¹��� ����, ���� string ����)

		- getline�� ���鵵 ������ �� ������ �Է��� ����
		- ���� ������ ����
		- �ٹٲ� ���ڰ� ���� ������ ����
		- �ٹٲ� ���� ���� ������ ���� �ٹٲ� ���ڸ� null�� �ٲ㼭 ����
		- �ٹٲ� ���ڵ� ���ۿ� ������ ����
	*/

	#pragma endregion

	#pragma region ���ǻ���

	cout << "Your age ? : ";
	int age2;
	cin >> age2; // 3 �Է� �� 3�� age�� ���� �ٹٲ� ���ڸ� ���ۿ� ����

	cout << "Your name ? : ";
	string name2;
	getline(cin, name2); // �ٹٲ� ���ڸ� null�� �ٲ� name�� ����

	/*
		cin�� getline�� ���� ū �������� �ٹٲ� ���ڸ� �г� �� �гĿ� ���� ������

		cin���� �Է��� ���� �� �ٹٲ� ���ڸ� ���ۿ� ����µ�
		���� getline���� �Է��� ���� �� getline�� �ٹٲ� ���ڸ� �о���̱� ������ �ٹٲ� ���ڸ� null�� �ٲپ name�� ����

		-> �� ������ �ذ��ϱ� ���ؼ� cin.ignore�� ����� ���۸� ����־�� ��
	*/

	cout << "Your age ? : ";
	int age3;
	cin >> age3; // 3 �Է� �� 3�� age�� ���� �ٹٲ� ���ڸ� ���ۿ� ����

	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 

	cout << "Your name ? : ";
	string name3;
	getline(cin, name3); // ���� �Է�

	/*
		cin.ignore(������ ������ �ִ밳��(byte), �ش� ���ڰ� ���� ������ ����(�ش� ���� ����))

		�ش� ���ڸ� ������ ������ ������ ������ �ִ� ������ŭ ����
	*/

	#pragma endregion

	#pragma region ���ڿ�����

	string ex1("Hello, ");
	string ex2("World!");

	std::cout << ex1 + ex2 << endl; // Hello, World! ���

	string ex3 = ex1 + ex2; // ex3 = "Hello, World!"
	ex3 += " Im happy!"; // ex3 = "Hello, World! Im happy!"

	#pragma endregion


	return 0;
}