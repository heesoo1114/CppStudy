#include <iostream>

using namespace std;

int main()
{
	#pragma region 기본적인방법

	const int row = 3, col = 5;

	int* row_1 = new int[col] {1, 2, 3, 4, 5};
	int* row_2 = new int[col] {6, 7, 8, 9, 10};
	int* row_3 = new int[col] {11, 12, 13, 14, 15};

	int** array2D = new int* [row] {row_1, row_2, row_3};
	/*
		2차원 동적 배열

		- 1차원 배열 포인터가 원소로 3개가 들어가 있는 배열을 이중 포인터로 선언한 1차원 배열 array2D
		- 포인터가 원소로 3개가 들어가 있는 배열(포인터)의 주소를 반환 받음
		- 현재 array2D에는 첫 번째 원소(row_1)의 주솟값이 들어가 있음
	*/

	cout << row_1 << endl;
	cout << *array2D << endl;
	// 위 2개는 동일 주소 출력

	delete[] row_1;
	delete[] row_2;
	delete[] row_3;
	delete[] array2D;

	#pragma endregion

	#pragma region for문

	int	**matrix = new int *[row];
	// row개의 포인터 원소를 가진 1차원 배열 이중 포인터

	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
		// 각각의 row마다 col개 원소를 가진 1차원 배열을 넣어줌 
	}
	// matrix[r]는 r번째 1차원 배열의 시작 주소

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matrix[r][c] = r * col + c;
		}
	}
	// 이중포인터에 [][]로 원소들에 접근

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	// 출력

	for (int r = 0; r < row; ++r)
	{
		delete[] matrix[r];
	}
	delete[] matrix;
	// 메모리 해제
	// 이중포인터의 원소들부터 delete 한 후 matirix delete

	#pragma endregion

	#pragma region 이중포인터사용X

	// 이중포인터를 사용하지 않고 1차원 배열을 2차원 배열 처럼 사용하기

	const int row1 = 3;
	const int col1 = 5;

	const int static2Darray[row1][col1] =
	{
		{ 1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	int* matrix1 = new int[row1 * col1]; // row1 * col1개의 원소를 가진 1차원 배열 할당

	for (int r = 0; r < row1; ++r)
	{
		for (int c = 0; c < col1; ++c)
		{
			matrix1[col1 * r + c] = static2Darray[r][c];
			// col1 * r : 몇 번째 row인지
		}
	}
	// 초기화

	for (int r = 0; r < row1; ++r)
	{
		for (int c = 0; c < col1; ++c)
		{
			cout << matrix1[col1 * r + c] << " ";
		}
		cout << endl;
	}
	// 출력

	delete matrix1;

	#pragma endregion

	return 0;
}