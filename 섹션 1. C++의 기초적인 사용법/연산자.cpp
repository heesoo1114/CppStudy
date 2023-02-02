using namespace std;
#include <iostream>

int main()
{
	int x = 2; 
	/*
		변수이고, 2는 리터럴(literal)
		= : 대입 연산자(Assignment)
	*/ 

	cout << x + 2 << endl;
	/*
		X + 2 : 표현식
		x, 2 : 리터럴, 피연산자
		+ : 연산자
	*/

	int y = (x > 0) ? 1 : 2;
	/*
		19번째 줄 : 삼항연산자
		x > 0이 true이면 y = 1, false이면 y = 2
	*/

	/*
		단항 : 피연산자 1개,
		이항 : 피연산자 2개,
		삼항 : 피연산자 3개
	*/

	return 0;
}