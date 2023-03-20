#include <iostream>
#include <conio.h> // getch, kbhit

using namespace std;

int main()
{
	cout << "시간 맞추기 게임" << endl;
	cout << "아무 키나 누르세요." << endl;

	long long Curtime = time(NULL);

	while (true)
	{
		if (_kbhit())
		{
			cout << "끝!" << endl;
			break;
		}
	}

	if (time(NULL) - Curtime == 10)
	{
		cout << "정답" << endl;
	}
	else if (time(NULL) - Curtime > 10)
	{
		cout << "시간이 지남" << endl;
	}
	else
	{
		cout << "시간이 빠름" << endl;
	}
}