#include <iostream>
#include <ctime>
#include <cstdlib> // srand, rand

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // seed �ѹ� ����
	// time �Լ��� ����ؼ� �ʸ� �� ��ȯ�ؼ� seed�� ����������
	// ������� ���� ����� �ϴ� �� ����

	for (int count = 1; count <= 100; ++count)
	{
		cout << rand() << "\t"; // seed���� ���� ���� 

		if (count % 5 == 0) cout << endl;
	}
}