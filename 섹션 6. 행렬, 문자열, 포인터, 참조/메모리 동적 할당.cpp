#include <iostream>

using namespace std;

int main()
{
	#pragma region ���������Ҵ�
	
	int* ptr = new int{ 7 }; // �����ڵ� : int val = 7;
	// int�� ũ�⸸ŭ �� �޸𸮸� �Ҵ� �޾ƿͼ� �ּҸ� ��ȯ

	cout << ptr << endl; // 0127E5A0 ��� 
	cout << *ptr << endl; // 7 ���

	#pragma endregion

	#pragma region �޸𸮹ݳ�
	
	int *ptr2 = new int{ 5 };

	cout << ptr2 << endl; // �ּڰ� ���
	cout << *ptr2 << endl; // 5���

	delete ptr2; // ptr2�� ������ �ִ� �� �޸� ���� �ݳ�
	// delete�� �ϸ� �ش� �����Ͱ� ����Ű�� �ִ� ������ �縮 ���� ������
	// ���Ŀ� � ������ �߻����� �𸣱� ������
	// delete ���� �����͸� nullptr�� �ʱ�ȭ�� �ִ� ���� ������

	cout << ptr2 << endl; // �ּڰ� ��� (���� X)
	cout << *ptr2 << endl; // �̻��� �� ��� (ptr2�� ����Ű�� �ִ� ������ �������� ���� ������ �� �� ���� ��)

	#pragma endregion

	#pragma region �޸𸮴���
	
	while (true)
	{
		// �� ��° �ݺ����� ������ ptr�� ������鼭
		// ������ �ִ� ptr�� �Ҵ�� �޸� ������ ���� ���� ��
		// �̰��� ���������� �߻��ϸ� �޸� ���� ������ �߻��ϰ� ��

		int* ptr = new int; // �ݺ������� ptr ����, ptr�� �� �޸� ���� �Ҵ�
		cout << ptr << endl;

		delete ptr;
		// �޸� ���� ������ �ذ��ϱ� ���ؼ� 
		// ptr�� �Ҵ�� �� �޸� ������ �ݳ� ��Ŵ���ν� �޸� ���� ������ ������
	}

	#pragma endregion

	return 0;
}