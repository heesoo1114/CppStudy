#include <iostream>

using namespace std;

unsigned int PRNG()
{
	static unsigned int seed = 4444; // �ƹ� ���� seed������ ����������
	// �̶� seed�� static���� �������ν� seed���� �޸𸮿� �������Ѽ� 
	// ó���� �Լ��� ȣ���� ���� �ʱ�ȭ �ϰ� ������ �Լ��� ȣ���� ����
	// ���� ����� seed������ ����� �� �ְ� ����

	seed = 8235729 * seed + 2396403;  // �ڷ����� ũ�⸦ �پ�Ѿ� overflow�� �ϰ� ������

	return seed % 32768; // 32768�� ������ �������� ��ȯ������ (������ : 0 ~ 32767)
}

int main()
{
	for (int count = 1; count < 100; ++count) 
	{
		cout << PRNG() << "\t";  
		if (count % 5 == 0) cout << endl; 
	}
}