#include <iostream>

using namespace std;

int main()
{
	const int length = 5;

	int numlist[length] = { 2, 1, 3, 5, 4 };
	
	for (int i = 0; i < length; i++)
	{
		int smallIndex = i;

		for (int j = i + 1; j < length; j++)
		{
			if (numlist[smallIndex] > numlist[j]) // 현재 배열보다 뒤에 있는 배열이 크면
			{
				smallIndex = j; // smallIndex를 제일 작은 배열로 해줌
			}
		}

		// 현재 배열과 뒤에 있는 배열 중에 제일 작은 배열과 스왑
		int temp = numlist[smallIndex];
		numlist[smallIndex] = numlist[i];
		numlist[i] = temp;
	}

	// 출력
	for (int i = 0; i < length; i++)
	{
		cout << numlist[i] << endl;
	}

	return 0;
}