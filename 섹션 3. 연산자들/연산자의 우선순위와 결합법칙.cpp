#include <iostream>

using namespace std;

int main()
{
	// �켱������ �� �ܿ� �� ���� ������ ��ȣ�� ����

	#pragma region �켱�������̰�������

	cout << 4 + 2 * 3 << endl;
	// 10 ���
	// �⺻������ * �� + ���� �켱������ ����

	cout << 4 + (2 * 3) << endl;
	// 10 ���
	// * �� �Ұ�ȣ�� ����Ͽ� �켱������ �����־ 
	// �⺻������ * �� + ���� �켱������ ���� ������ ���� ����� ����

	cout << (4 + 2) * 3 << endl;
	// 18 ���
	// + �� * ���� �켱������ ������ �Ұ�ȣ�� ����Ͽ� �켱������ ������
	// ���� �Ұ�ȣ �Ⱥ��� ���� ����� �ϰ� �Ѿ

	#pragma endregion

	#pragma region �켱�������̰�������

	cout << 4 * 2 / 4 << endl;
	// * �� / �� �켱������ ����
	// �켱������ ���� ���� Associativity�� Ȯ���Ͽ� ���
	// * �� / �� Associativity�� Left-to-right�̱� ������ ���� * ���� ����� �ϰ� �Ѿ

	#pragma endregion

	// Associativity���� Left-to-rigit, Right-to-left �� ���� ������ ����
	// Left-to-rigit�� ���ʺ��� �켱������ �Űܼ� ����ϴ� ��, Right-to-Left�� �����ʺ��� �켱������ �ű�

	return 0;
}