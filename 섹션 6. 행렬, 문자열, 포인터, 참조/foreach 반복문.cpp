#include <iostream>

using namespace std;

int main()
{
	cout << endl;

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int number : fibonacci) // 자료형은 auto로 대체 가능
	{
		number *= 10;
	}
	// fibonacci 배열이 number에 복사
	// 단순히 number는 fibonacci의 값을 복사한 것이기 때문에 fibonacci에 영향을 주지는 않음 
	// (* 10에도 불구하고 변함이 없음)

	for (int &number : fibonacci) // 자료형은 auto로 대체 가능
	{
		number *= 10;
	}
	// number을 참조 변수로 해주었기 때문에 number는 fibonacci를 참조하게 됨
	// 따라서 * 10이 fibonacci 원소의 값들이 변함

	// 출력
	for (int number : fibonacci) // 자료형은 auto로 대체 가능
	{
		cout << number << " "; // 0 10 10 20 30 50 80 130 210 340 550 890 출력
	}
	cout << endl;

	return 0;
}