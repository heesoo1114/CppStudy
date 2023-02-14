#include <iostream>

using namespace std;

int main()
{
	#pragma region �⺻���ι��

	const int row = 3, col = 5;

	int* row_1 = new int[col] {1, 2, 3, 4, 5};
	int* row_2 = new int[col] {6, 7, 8, 9, 10};
	int* row_3 = new int[col] {11, 12, 13, 14, 15};

	int** array2D = new int* [row] {row_1, row_2, row_3};
	/*
		2���� ���� �迭

		- 1���� �迭 �����Ͱ� ���ҷ� 3���� �� �ִ� �迭�� ���� �����ͷ� ������ 1���� �迭 array2D
		- �����Ͱ� ���ҷ� 3���� �� �ִ� �迭(������)�� �ּҸ� ��ȯ ����
		- ���� array2D���� ù ��° ����(row_1)�� �ּڰ��� �� ����
	*/

	cout << row_1 << endl;
	cout << *array2D << endl;
	// �� 2���� ���� �ּ� ���

	delete[] row_1;
	delete[] row_2;
	delete[] row_3;
	delete[] array2D;

	#pragma endregion

	#pragma region for��

	int	**matrix = new int *[row];
	// row���� ������ ���Ҹ� ���� 1���� �迭 ���� ������

	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
		// ������ row���� col�� ���Ҹ� ���� 1���� �迭�� �־��� 
	}
	// matrix[r]�� r��° 1���� �迭�� ���� �ּ�

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matrix[r][c] = r * col + c;
		}
	}
	// ���������Ϳ� [][]�� ���ҵ鿡 ����

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	// ���

	for (int r = 0; r < row; ++r)
	{
		delete[] matrix[r];
	}
	delete[] matrix;
	// �޸� ����
	// ������������ ���ҵ���� delete �� �� matirix delete

	#pragma endregion

	#pragma region ���������ͻ��X

	// ���������͸� ������� �ʰ� 1���� �迭�� 2���� �迭 ó�� ����ϱ�

	const int row1 = 3;
	const int col1 = 5;

	const int static2Darray[row1][col1] =
	{
		{ 1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	int* matrix1 = new int[row1 * col1]; // row1 * col1���� ���Ҹ� ���� 1���� �迭 �Ҵ�

	for (int r = 0; r < row1; ++r)
	{
		for (int c = 0; c < col1; ++c)
		{
			matrix1[col1 * r + c] = static2Darray[r][c];
			// col1 * r : �� ��° row����
		}
	}
	// �ʱ�ȭ

	for (int r = 0; r < row1; ++r)
	{
		for (int c = 0; c < col1; ++c)
		{
			cout << matrix1[col1 * r + c] << " ";
		}
		cout << endl;
	}
	// ���

	delete matrix1;

	#pragma endregion

	return 0;
}