#include<iostream>
using namespace std;

int main()
{
	// 1���� 100������ ���� �ϳ��� �������� ����

	int randomNumber;
	srand((unsigned int)time(NULL));
	randomNumber = rand() % 100 + 1;
	
	int tryCount = 0;

	while (true)
	{
		int input;
		cin >> input;

		tryCount++;
		
		if (input > randomNumber)
		{
			cout << "������ ������ �����ϴ�" << endl;
		}
		else if (input < randomNumber)
		{
			cout << "������ ������ �����ϴ�" << endl;
		}
		else
		{
			cout << "�����մϴ�." << " �õ��� Ƚ�� : " << tryCount << endl;
			break;
		}
	}

	return 0;
}