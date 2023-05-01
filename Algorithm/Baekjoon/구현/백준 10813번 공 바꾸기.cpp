#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		int index1, index2;
		cin >> index1 >> index2;

		if (index1 == index2) continue;

		swap(arr[index1 - 1], arr[index2 - 1]);
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
}
