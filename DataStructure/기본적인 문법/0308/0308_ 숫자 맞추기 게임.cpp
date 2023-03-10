#include<iostream>
using namespace std;

int main()
{
	// 1부터 100사이의 정수 하나를 랜덤으로 저장

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
			cout << "제시한 정수가 높습니다" << endl;
		}
		else if (input < randomNumber)
		{
			cout << "제시한 정수가 낮습니다" << endl;
		}
		else
		{
			cout << "축하합니다." << " 시도한 횟수 : " << tryCount << endl;
			break;
		}
	}

	return 0;
}