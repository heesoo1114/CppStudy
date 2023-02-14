#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;  

	int* array = new int[length] { 1, 2, 3}; // 동적 할당에서는 배열의 크기를 꼭 지정해주어야 함
	// 입력된 length와 원소의 개수의 차이에 따라 출력이 달라짐
	// length > 원소의 개수 이면 입력된 원소들은 들어가고 빈 원소 부분들은 0으로 출력됨
	// length < 원소의 개수 이면 length 만큼만 나오고 남은 부분은 출력되지 않음

	for (int i = 0; i < length; ++i)
	{
		cout << *(array + i) << endl; // *(array + i) = array[i]
	}

	delete[] array; 

	return 0;
}