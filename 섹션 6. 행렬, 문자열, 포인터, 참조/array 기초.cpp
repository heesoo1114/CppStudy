#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

// my_arr�� ���� ������ ������ �� �ϸ� �迭�� ������ ���� ������ ���� ������ ��ȿ����
// my_arr�� ���� ������ ������ �ָ� ������ �ʿ䰡 ������ �ϴ� ���� ȿ����
void printLength(array<int, 5> &my_arr) 
{
	cout << my_arr.at(0) << endl; // 2 ���
}

int main()
{
	// ���� �迭�� �迭�� ũ�Ⱑ ������ Ÿ�ӿ� ������ �� �ֵ��� ����� �ϹǷ� �迭�� ũ�⸦ �� ������ �־�� �� (������ �־��� �� ����)
	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	// -> int array[5] = { 1, 2, 3, 4, 5 };

	my_arr = { 2, 3, 4, 5, 6 }; // ���� �迭������ array�� ����� ���� �迭�� �ٸ� �迭�� �ʱ�ȭ�� ������

	cout << my_arr[0] << endl;		// 2 ��� (my_arr�� 0��° ���� ��ȯ)
	cout << my_arr.at(0) << endl;	// 2 ��� (my_arr�� 0��° ���� ��ȯ) (at�Լ��� ����ϸ� �ε����� ��� ���� �Է����� �� ����ó�� �߻�)
	cout << my_arr.size() << endl;	// 5 ��� (my_arr�� ���� ���� ��ȯ)

	printLength(my_arr);
	// �Ϲ����� ���� �迭�� �Ű������� ���� �� ����
	// ������ array�� ����� ���� �迭�� �Ű������� ���� �� ����

	#pragma region ����
	
	array<int, 5> arr = { 1, 5, 3, 2, 4 };

	for (int arr : arr) // int�� auto�� ���ְ� arr�� ���������� ���� �� ����
	{
		cout << arr << " ";
	}
	cout << endl;

	sort(arr.begin(), arr.end()); // sort(���۹���, ������) ���۹��� ���� ������ ���� ������ ��
	// begin : �迭�� ù ��° ���� ��ġ
	// end : �迭�� ������ ���� ��ġ
	// rbegin, rend : ������ �ݺ��� (������������ ������ ��)

	for (int arr : arr) // int�� auto�� ���ְ� arr�� ���������� ���� �� ����
	{
		cout << arr << " ";
	}
	cout << endl;

	#pragma endregion

	return 0;
}