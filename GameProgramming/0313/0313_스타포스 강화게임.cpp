#include <iostream>
using namespace std;

int main()
{
	cout << " ------------------------ " << endl;
	cout << "    스타포스 강화 게임    " << endl;
	cout << " ------------------------ " << endl;

	int upgrade = 0;
	cout << "현재 무기는 몇 성인가요? : ";
	cin >> upgrade;

	srand((unsigned int)time(NULL));
	float percent = rand() % 10001 * 0.01;
	// float percent = rand() % 10001 / 100.f;
	// 0 ~ 2성 : 90%, 3 ~ 5성 : 50%, 6 ~ 9성 : 10%, 10성 이상 : 1% 

	cout << "현재 무기 Upgrade : " << upgrade << "성" << endl;
	cout << "강화 확률 Percent : " << percent << "%" << endl;
	cout << "강화하시겠습니까? 예 : 1, 아니오 : 0" << endl;

	int input;
	cin >> input;
	if (input == 0) return 0;
	
	if (upgrade <= 2)
	{
		if (percent <= 90.f)
		{
			cout << "강화 성공" << endl;
		}
		else
		{
			cout << "강화 실패" << endl;
		}
	}
	else if (3 <= upgrade && upgrade <= 5)
	{
		if (percent <= 50.f)
		{
			cout << "강화 성공" << endl;
		}
		else
		{
			cout << "강화 실패" << endl;
		}
	}
	else if (6 <= upgrade && upgrade <= 9)
	{
		if (percent <= 10.f)
		{
			cout << "강화 성공" << endl;
		}
		else
		{
			cout << "강화 실패" << endl;
		}
	}
	else if (upgrade >= 10)
	{
		if (percent <= 1.f)
		{
			cout << "강화 성공" << endl;
		}
		else
		{
			cout << "강화 실패" << endl;
		}
	}
}