#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "Heesoo";
	// "Heesoo" 6���ڷ� sizeof(str)�� 7�� ������ ������ 
	// ���ڿ� �ڿ� ���� �˸��� "\0"�� ���� �޷� ����

	char str2[100]; // 100���� ���ڰ� �� �� �ִ� char�� �迭
	cin >> str2; // Heesoo �Է� (���� ������ �Է¹���)
	str2[0] = 'h'; // �迭�� ù ��° ���ڰ��� h�� ������ �� (H -> h)

	char str3[100];
	cin.getline(str3, 100); // Hi. I'm heesoo yoon �Է� (cin.getline�� ������ �����Ͽ� �Է��� ����)
	// �Ű����� -> (������ ������, ������ ������ �ִ� ����)
	
	string str4;
	getline(cin, str4, '\n');
	// cin.getline�� �ٸ��� �ִ� ������ �Է����� �ʾƵ� ��
	// �߰��� ���ڸ� �Է��� �ش� ���ڸ� ���� ������ �Է� ����
	// �Լ����� -> getline(�Է½�Ʈ�� ������Ʈ, ������ string ������, ���� ����(������));

	char a, b;
	a = cin.get(); 
	b = cin.get();
	// get �Լ��� ǥ�� �Է� ���ۿ��� ���ڸ� �ϳ��� ������
	// ���ڴ� �ϳ��� �Է� ���� (����, ���� ����)

	char strA[] = "copy";
	char strB[20];

	strcpy(strB, strA); // strB �迭�� strA�� ���� ����

	/*
		cstring ���̺귯���� ���� 
	
		strcpy(A, B) : B���� A�� ����
		strcat(A, B) : B���� A �ڷ� ����
		strcmp(A, B) : ���ڿ� �� (-1, 0, 1 ��ȯ)
	*/

	return 0;
}