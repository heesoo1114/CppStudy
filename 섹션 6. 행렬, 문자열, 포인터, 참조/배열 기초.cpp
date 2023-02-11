#include <iostream>

using namespace std;

// ���⼭�� int scoreList[20]�� �������� (�迭�� �ƴ�) -> �迭 �̸��� ���ؼ� �ּڰ��� �����Ŷ�� ���� �˸��� ���ؼ� ǥ��
// ũ�⸦ 20���� ������ �� ���� ���� �ǹ̰� ���� -> 20ũ�� ¥���� �迭�� ���� �����Ͷ�� �˷��ִ� �ͻ�
// �Լ��� �Ű������� �迭�� �� �� ����
// ���� ũ��� 80byte�� �ƴ� �ּڰ��� ��� int �ϳ��� 4byte�� ���� (64bit ȯ�濡���� 8byte��� ��)
// main�� socorList�ʹ� ������ ������
void doSomething(int scoreList[20]) 
{
	cout << (int)&scoreList << endl; // �������� �����Ͱ� �ǰ�
	cout << (int)&scoreList[0] << endl; // �����Ϳ� �迭�� �ּҸ� ������ �ͼ� �迭�� ���ڰ��� ���� ������ �� �ְ� ��
	cout << scoreList[0] << endl;
	cout << scoreList[1] << endl;
	cout << scoreList[2] << endl;
}

int main()
{
	#pragma region ������ʱ�ȭ

	int a1[3] = { 1, 2, 3 }; // �⺻���� ����� �ʱ�ȭ
	int a2[] = { 1, 2, 3 }; // ũ�⸦ ���������� �ʾ����� �ʱ�ȭ ���� ������ �迭�� ũ�⸦ �� �� ����
	int a3[4] = { 1, 2 }; // ũ�Ⱑ 4�� �����Ǿ� ������ �ʱ�ȭ ���� 2�� �ۿ� ��� ���� �͵��� 0���� ä����
	int a4[4]; // ������ ������ �ʱ�ȭ�� ���� ���� ����. (������ ���� �� ����)
	int a5[]; // (�����ڵ�) ��� �� ������ ũ�⸦ �� �� ����

	#pragma endregion

	#pragma region �迭��ũ��

	int b1[5]; // int�� ũ���� ���ӵ� 5���� �޸� ������ �����´ٴ� �ǹ�.
	// ���� int���� 4byte�� ���ӵ� 5���� �޸� �����̱� ������
	// int�� �迭 b1�� ũ��� 4byte * 5�� = 20byte 

	struct Rectangle
	{
		int length;
		int width;

		// �� ����ü�� ũ��� 8byte
		// int�� ���� 2���� ������ ����
	};

	Rectangle rect_arr[10]; // Rectangle�� �迭 (����ü �迭)
	// Rectangle ����ü�� 8byte�̱� ������
	// Rectangle�� �迭 rect_arr�� ũ��� 8byte * 10�� = 80byte 

	#pragma endregion

	#pragma region ũ�����

	int num = 0;
	cin >> num;

	int c1[num]; // (�����ڵ�) �迭�� ũ�Ⱑ ������ Ÿ���� �ƴ� ��Ÿ�ӿ� ������
	// �迭�� ũ�⸦ �����ϴ� num�� ������� �Է����� ��Ÿ�ӿ� ������ �Ǳ� ������

	int num1 = 2;
	int c2[num1]; // (�����ڵ�) num�� 2�� �Ҵ�Ǵ� �� ��Ÿ�� �� ������
	// �迭�� ũ��� ������ Ÿ�ӿ� ������ �ž� ��

	const int num2 = 3; // ����� ������ Ÿ�ӿ� ������ �Ǳ� ������ ������ ����
	int c3[num2]; 

	#pragma endregion

	#pragma region �迭���Ű�������

	const int num_Studendts = 20;

	int scoreList[num_Studendts] = { 1, 2, 3, 4, 5, };  
	// 4byte�� �������� int�� ���� 20��
	// scoreList�� ũ��� 80byte

	cout << (int)scoreList << endl;	 // �迭 �̸�, �迭 ù ��° ������ �ּڰ�
	cout << (int)&scoreList << endl; // �迭 �̸�, �迭 ù ��° ������ �ּڰ�  (�� &�� ���� scoreList, 12��° �ٰ� ���� ����)
	cout << scoreList[0] << endl;
	cout << scoreList[1] << endl;
	cout << scoreList[2] << endl;

	doSomething(scoreList); // socreList�� ù ��° ������ �ּڰ��� doSomething �Լ��� �Ű������� ������

	#pragma endregion

	return 0;
}