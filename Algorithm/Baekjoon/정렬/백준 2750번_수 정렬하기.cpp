#include<iostream>
#include<vector>

using namespace std;

int main()
{
	#pragma region ����ӵ�UP

	// ���� �ӵ� UP
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#pragma endregion

	int count;
	
	cin >> count;

	int	*numList = new int[count];

	// �Է�
	for (int i = 0; i < count; i++) cin >> numList[i];

	// ����
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

	// ���
	for (int i = 0; i < count; i++) cout << numList[i] << endl;

	delete[] numList;

	return 0;
}