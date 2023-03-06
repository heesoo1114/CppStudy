#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	bool cross = false;

	cin >> a >> b >> c >> d;

	cross = (min(a, b) < c && c < max(a, b)) ? ((min(a, b) < d && d < max(a, b)) ? false : true) : ((min(a, b) < d && d < max(a, b)) ? true : false);
	/* 
	   처음에 c를 기준으로 c가 a와 b 사이에 있는지 확인
	   
	   c가 a와 b 사이에 있으면
	   d는 a와 b 사이에 있지 않아야 cross
	   그래서 d가 안에 있으면 true를 반환해줌
	   
	   c가 a와 b 사이에 있지 않으면
	   d가 a와 b 사이에 있어야 cross
	   그래서 d가 안에 있으면 false를 반환해줌

	   요약 : 
	   c가 안에 있다 -> b가 안에 있지 않아야 cross -> 따라서 d가 안에 있지 않아야 true 반환
	   c가 안에 없다 -> b가 안에 있어야 cross -> 따라서 d가 안에 있으면 true 반환
	*/

	if (cross)
		cout << "cross" << endl;
	else
		cout << "not cross" << endl;

	return 0;
}