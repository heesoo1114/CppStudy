#include <iostream>
using namespace std;

int main()
{
	cout << " ------------------------ " << endl;
	cout << "    ��Ÿ���� ��ȭ ����    " << endl;
	cout << " ------------------------ " << endl;

	int upgrade = 0;
	cout << "���� ����� �� ���ΰ���? : ";
	cin >> upgrade;

	srand((unsigned int)time(NULL));
	float percent = rand() % 10001 * 0.01;
	// float percent = rand() % 10001 / 100.f;
	// 0 ~ 2�� : 90%, 3 ~ 5�� : 50%, 6 ~ 9�� : 10%, 10�� �̻� : 1% 

	cout << "���� ���� Upgrade : " << upgrade << "��" << endl;
	cout << "��ȭ Ȯ�� Percent : " << percent << "%" << endl;
	cout << "��ȭ�Ͻðڽ��ϱ�? �� : 1, �ƴϿ� : 0" << endl;

	int input;
	cin >> input;
	if (input == 0) return 0;
	
	if (upgrade <= 2)
	{
		if (percent <= 90.f)
		{
			cout << "��ȭ ����" << endl;
		}
		else
		{
			cout << "��ȭ ����" << endl;
		}
	}
	else if (3 <= upgrade && upgrade <= 5)
	{
		if (percent <= 50.f)
		{
			cout << "��ȭ ����" << endl;
		}
		else
		{
			cout << "��ȭ ����" << endl;
		}
	}
	else if (6 <= upgrade && upgrade <= 9)
	{
		if (percent <= 10.f)
		{
			cout << "��ȭ ����" << endl;
		}
		else
		{
			cout << "��ȭ ����" << endl;
		}
	}
	else if (upgrade >= 10)
	{
		if (percent <= 1.f)
		{
			cout << "��ȭ ����" << endl;
		}
		else
		{
			cout << "��ȭ ����" << endl;
		}
	}
}