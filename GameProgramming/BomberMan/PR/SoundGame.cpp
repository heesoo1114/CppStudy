#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Sound.h"
using namespace std;

void PlayAllSound(double soundID[8], string outputList[8])
{
	for (int i = 0; i < 8; i++)
	{
		Beep(soundID[i], 500);
		cout << outputList[i] << " ";
		Sleep(500);
	}
}

int GetInput(string outputList[8])
{
	cout << "�Է��ϼ���" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << outputList[i] << " ";
	}
	cout << endl;

	int input;
	cin >> input;
	input -= 1;

	return input;
}

void ThreeSecondDelay()
{
	// ���⼭ 3, 2, 1
	for (int i = 0; i < 3; i++)
	{
		cout << "\r" << 3 - i << "...";

		// \r�� �� ���� �� ������ Ŀ���� �ű�
		// �ٵ� �̹� ����� �� �ڸ���
		// ������ Ŀ���� ������ ������ �̹� ��µ� �ڸ�����
		// �ٽ� ����� �ϸ� ����� ���� ����ϴ� ���� ����

		Sleep(2000);
	}
}

int main()
{
	double soundList[8] = { 523.25, 587.33, 659.26, 698.46, 783.99, 880, 987.77, 1046.50 };
	string outputList[8] = { "��(1)", "��(2)", "��(3)", "��(4)", "��(5)", "��(6)", "��(7)", "��(8)" };

	cout << "---------------------------" << endl;
	cout << "	   ���� ���� ����       " << endl;
	cout << "---------------------------" << endl;
	cout << "���� : ó���� 8���踦 ����ְ� ." << endl;
	cout << "������ 8�� �� �� ���� ���� ��� �ش�." << endl;
	cout << "---------------------------" << endl;
	cout << "�غ��ϰ� �ƹ� Ű�� ������." << endl;

	_getch(); // �ƹ� Ű �Է�

	cout << "---------------------------" << endl;

	// ó�� �Ҹ� ����ֱ�
	PlayAllSound(soundList, outputList);
	cout << endl;

	// ������ �ְ� �������� �� ���ϱ�
	srand((unsigned int)time(NULL));
	int answer = rand() % 8;

	cout << "3�� �� �� �� PLAY" << endl;
	Sleep(3000);

	ThreeSecondDelay();
	Beep(soundList[answer], 500);

	while (true)
	{
		Sleep(2000);
		
		int input = GetInput(outputList);

		// ���� üũ
		if (input != answer)
		{
			cout << "Ʋ�Ƚ��ϴ�" << endl;
			PlayAllSound(soundList, outputList);
			cout << endl;
		}
		else if (input == answer)
		{
			system("cls");
			cout << "�¾ҽ��ϴ�" << endl;
			break;
		}
	}
}