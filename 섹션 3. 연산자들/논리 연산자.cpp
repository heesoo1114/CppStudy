#include <iostream>

using namespace std;

int main()
{
	/*
		�� �������� ����

		ex. A �� ������ B

		���� ������
		- !(NOT) : o�� ������ ��� ���� true��, o���� false�� (�׳� �ݴ�� ���شٰ� �����ϸ� ����)

		���� ������
		- &&(AND) : A�� B�� true�̸� true, A�� B �� �ϳ��� false�̾ false
		- ||(OR) : A�� B �� �ϳ��� true�̾ true, �� A�� B�� false�̸� false

		������� bool Ÿ������ ����
	*/

	#pragma region �켱����

	// �켱����
	// ! > && > ||

	int a = 3;
	int b = 3;
	int c = 4;

	if (!a == b) // ������ �ڵ�
	{
		// (!a) == b �� ����
		// !(a == b �� ����������
	}

	if (a || b && c)
	{
		// a || (b && c) �� ����
		// (a || b) && c �� ����������
	}

	#pragma endregion

	#pragma region ���ǻ���

	int x = 2;
	int y = 2;

	if (x == 1 && y++ == 2)
	{
		// nothing
	}

	cout << y << endl; // 2 ���

	/*
		if������ �и� y++�� ���־��µ� �� 2�� ����� �ɱ�?

		&&(AND) �� A && B ���� A�� false�̸� B�� �������� ����
		A�� b �� �ϳ��� false�̾ ����� false��
	*/

	#pragma endregion
	
	#pragma region XOR

	/*
		A XOR B

		A�� B�� bool���� �ٸ��� true, ������ false
		
		c++������ XOR �����ڰ� ���� ������
		if (A != B) �� ǥ���Ͽ� �����

		+ (^)�� ��Ʈ �����ڷμ��� XOR
	*/

	#pragma endregion

	#pragma region ��𸣰���Ģ
	
	/*
		!(a && b) = !a || !b  
		!(a || b) = !a && !b 

		!(a && b) != !a && !b
		!(a || b) != !a || !b
	*/

	#pragma endregion

	return 0;
}