#include <iostream>
#include <conio.h> // getch, kbhit

using namespace std;

int main()
{
	cout << "�ð� ���߱� ����" << endl;
	cout << "�ƹ� Ű�� ��������." << endl;

	long long Curtime = time(NULL);

	while (true)
	{
		if (_kbhit())
		{
			cout << "��!" << endl;
			break;
		}
	}

	if (time(NULL) - Curtime == 10)
	{
		cout << "����" << endl;
	}
	else if (time(NULL) - Curtime > 10)
	{
		cout << "�ð��� ����" << endl;
	}
	else
	{
		cout << "�ð��� ����" << endl;
	}
}