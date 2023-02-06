#include <iostream>
#include "����(Linking)_Constants.h"

using namespace std;

/*
	extern�� ������ extern �������� : �ٸ� ���Ͽ��� �纻���� �� (������ �޸�) 
	extern�� �پ��ִ� extern �������� : �ٸ� ���Ͽ����� �ش� ���������� �޸𸮸� ���� (������ �޸�)
	static �������� : �ش� ���Ͽ����� ��� ����

	���� �ٲ� ������ ���� const ������������ extern�� �ٿ��� ��� ����ż� �޸� �ø� �ʿ� ���� �޸𸮸� �����ؼ� ���� �� �ֵ��� �ϴ� ���� ����

	<�ʱ�ȭ X> 
	int g_x;  // external. �ٸ� ���Ͽ��� �纻���� ���
	static int g_x; // internal. �ٸ� ���Ͽ��� ��� �Ұ� (�ش� ���� �������� ���� �� ����)
	const int g_x; // external. (�����ڵ�) const�� �� �ʱ�ȭ�� ���־����
	extern int g_z; // �ش� ������ include �ϴ� �ٸ� ���Ͽ��� �ش� ������ �޸𸮸� �����ϰ� ��
	extern const int g_z; // �ش� ������ �޸𸮸�  �����ϴ� �ٸ� ���Ͽ��� �ʱ�ȭ �� ����� ��
	
	<�ʱ�ȭ O> 
	int g_y(1); // external. �ٸ� ���Ͽ��� �纻���� ��� 
	static int g_y(1); // internal. �ٸ� ���Ͽ��� ��� �Ұ� (�ش� ���� �������� ���� �� ����)
	const int g_y(1); // external. �ٸ� ���Ͽ��� �纻���� ��� 
	extern int g_w(1); // �ʱ�ȭ�� ���־����� �ٸ� ���Ͽ��� ���ǰ� �Ұ��� 
	extern const int g_w(1);
*/

static int a = 1;
// �ش� cpp ���Ͽ����� ����� �� ����

extern int b = 2; 
/*
	- extern ���� ����
	- �ʱ�ȭ ����� �� (�ʱ�ȭ�� ������ ������ garbage���� �� �־ �ٸ� ���Ͽ��� ����� �� �̻��ϰ� �۵���)
	- �ʱ�ȭ�� �ϴ� ��ġ�� ��� ���� 
	- �ʱ�ȭ�� �� ����  �ָ� ��ü ���� �߿��� �ش� �����̸��� ���� ���������� 2���� �Ȱ�
	- �ٸ� ���Ͽ��� extern���� ����� �������� b�� ����Ҷ�� extern�� ������ �� ����
*/

int value = 123; 
// extern �������� value ���� 

void doSomething(); // forward declaration
// extern ����

extern int abc;
// �ٸ� ���Ͽ��� ����� �������� abc�� ����Ҷ�� extern�� ������ �� ����
// extern�� �����ϸ� int abc; �� �ش� cpp ���Ͽ��� ���ο� �������� abc�� �����ϴ� ��

int main()
{
	/*
		<��ŷ>

		include �� �ٸ� ���ϰ� ����
		�����Ϸ��� ��ŷ�� include �� �ٸ� ���� ��ü�� �����ؿ��� ������� �۵�
	*/

	abc++; // 3++
	cout << abc << endl; // 4���

	doSomething(); // 123++
	cout << value << endl; // 124 ���

	doSomething(); // 124++
	cout << value << endl; // 125 ���

	return 0;
}