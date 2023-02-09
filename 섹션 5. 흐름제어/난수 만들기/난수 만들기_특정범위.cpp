#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); // RAND_MAX : ������ �����ؼ� ���� �� �ִ� ���� ū ����. (��ũ��)
	// �������� ������ ������ �������� �� ���� �����ϰ� static���� ����
	// ����� �����ؼ� ���� ������Ŵ

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction)); 
	// ������ fraction�� ���ؼ� 0 ~ 1 ������ ������ ������
	// �� (max - min + 1) �� ���ؼ� 0 ~ (max - min + 1) ������ ������ ������
	// ���� �� ��ȯ
	// �� �ּڰ� �����ֱ�
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0))); // seed�� ����

	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(10, 30) << "\t";

		if (count % 5 == 0) cout << endl;

		return 0;
	}

	// �̸� �� ���� �ϴ� ���
	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() %5 + 3 << "\t"; 
		// ���� �������ָ� ������ 5�� ���� �������� 0 ~ 4 ���̰� ������ �ű⿡ 3�� ������ 9 ~ 13 ���̰� ������ ��

		if (count % 5 == 0) cout << endl; 
	}
}