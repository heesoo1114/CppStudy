#include<iostream>
#include<vector>
using namespace std;

int arr[50];

// ����� ���� ��ȹ��
int func(int num)
{
	// 0��° 0, 1��° 1�� ���̽� ���
	if (num <= 1)
	{
		return num;
	}

	// �迭�� ������� ������ �̹� ����� �ߴٴ� ���̴� 
	// �ٽ� ����� ���� �ʰ� �̹� ����� �Ǿ� �ִ� ���� ��ȯ�ؼ� ������
	if (arr[num] != 0) 
	{
		return arr[num];
	}

	return arr[num] = func(num - 1) + func(num - 2);
}

int main()
{
	#pragma region ����ӵ�UP
	// ���� �ӵ� UP
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	#pragma endregion

	int input;

	cin >> input;

	cout << func(input) << endl;

	return 0;
}