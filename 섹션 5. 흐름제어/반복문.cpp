#include <iostream>

using namespace std;

int main()
{
	#pragma region for

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " "; // 1 2 3 4 5 ���
	}

	/*
		for ( A; B; C)
		{
			D
		}

		������� : A B D C B D C B D C

		����
		A : �ݺ��� �ʱ�ȭ
		B : �ݺ� ���� Ȯ��
		C : ���� �ݺ��� �ݺ��� ��ȭ
		D : ����

		+ ABC 3���� �� �ʿ������� ����
	*/

	#pragma endregion

	#pragma region while

	while (true) // �ݺ�����
	{
		// ����
	}

	unsigned int count = 5;

	while (count >= 0)
	{
		cout << count << endl;
		count--;
	}
	/*
		unsigned int�� ������ ������ ���Ե��� ����
		count�� ���� ���ҵǸ鼭 0���� ���ҵǸ� ��ȯ�Ǿ� unsigned int�� ǥ���� �� �ִ� ��� �ִ����� ��
	*/

	#pragma endregion

	#pragma region dowhile

	int a = 10;
	int b;

	do
	{
		cout << "a���� ũ�� b�� ���� �Է����ּ���." << endl;
		cin >> b;
	} while (a >= b);

	
	// do�� ������ �� �� �̻��� �ݺ������� �����

	#pragma endregion

	#pragma region goto
	
	int y;

	Again : // �� ��ġ�� �̵�

	cout << "y���� �Է����ּ���." << endl;
	cin >> y;

	if (y < 0)
	{
		goto Again; // Again ���� �ִ� ��ġ�� �̵���
	}

	cout << y << endl;

	#pragma endregion

	#pragma region jump

	/*
		break : �ش� �ݺ��� �ϳ��� Ż��
		continue : �ǳʶٰ� ���� �ݺ�����
	*/

	int c = 0;

	do
	{
		if (c == 5)
		{
			continue; // �Ʒ� ������� �ǳʶٰ� ���� �ݺ����� ��
			// �׷��� c ���� 5�� ��� ������
			// -> ���ѷ���
			// �ش� ������ �ذ��ϱ� ���� while ���ǽĿ��� while (++c < 10) ���� �ϱ⵵ ��
		}

		cout << c << endl;  
		c++;
	} while (c < 10);

	#pragma endregion

	return 0;
}