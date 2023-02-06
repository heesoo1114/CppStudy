#include <iostream>

using namespace std;

namespace a
{
	int my_var = 123;
	char aa = 'a';
}

namespace b
{
	int my_var = 123;
	char bb = 'b';
}

int main()
{
	using namespace std;

	#pragma region ������Ȳ

	using namespace a;
	using namespace b;

	cout << my_var << endl; // �����ڵ�
	/*
		���� my_var�� namespace a�� b�� ���� �̸����� ����Ǿ� ����
		23, 24��° �ٿ��� namespace a�� b ��� ������ �����

		main���� ����ϴ� my_var�� a�� b �� ������ my_var���� �� �� ����

		+ �տ� namespace��:: ���� ������ �� �� ������ �׷��� using���� ����ϴ� �ǹ̰� ���� 
	*/

	cout << aa << endl; // ���� �߻� X
	cout << bb << endl; // ���� �߻� X
	// aa, bb�� ������ ���ӽ����̽��� ������ �� �־ ������ �߻����� ����

	#pragma endregion

	#pragma region �ذ���

	{
		using namespace a;
		cout << my_var << endl; // ������ �߻����� ����
		/*
			using���� { } �� �������� �۵�

			���� �ش� �߰�ȣ ���� �ȿ����� a�� my_var�̶�� ����� ��Ȯ�ϰ� �� �� ����
		*/
	}

	{
		using namespace b;
		cout << my_var << endl;  // ���� �߻����� ����
		/*
			using���� { } �� �������� �۵�

			���� �ش� �߰�ȣ ���� �ȿ����� b�� my_var�̶�� ����� ��Ȯ�ϰ� �� �� ����
		*/
	}

	// + �߰�ȣ �ۿ� �� ū ������ �ִ� using���� ������ ����

	#pragma endregion

	// �������� �����ϴ� using���� ���� ����
	// ex : ��� ���ϰ��� ���� include �Ǵ� ���Ͽ� using���� �������� ������ ���� �߻� Ȯ�� ����

	return 0;
}