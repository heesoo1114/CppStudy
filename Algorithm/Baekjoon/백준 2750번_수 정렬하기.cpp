#include<iostream>
#include<vector>

using namespace std;

int main()
{
	#pragma region 실행속도UP

	// 실행 속도 UP
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#pragma endregion

	int count;
	
	cin >> count;

	int	*numList = new int[count];

	// 입력
	for (int i = 0; i < count; i++) cin >> numList[i];

	// 정렬
	for (int i = 0; i < count; i++) 
	{
		for (int j = 0; j < count - 1; j++) 
		{
			if (numList[j] > numList[j + 1]) 
			{
				// Swap
				int temp = numList[j];
				numList[j] = numList[j + 1];
				numList[j + 1] = temp;
			}
		}
	}

	// 출력
	for (int i = 0; i < count; i++) cout << numList[i] << endl;

	delete[] numList;

	return 0;
}