#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		<vector�� ����>

		- ũ�⸦ ���� �߿� ���� ����
		- ũ�⸦ �ƹ� ���� resize�Լ��� ����ؼ� ���� ����
		- �޸𸮸� �˾Ƽ� ������ �� (delete �� �ʿ� ����)
		- �ڽ��� ���̸� �˰� ���� (�Ű������� ���͸� ������ ���� ������ �� �� ����)
	*/

	vector<int> arr = { 1, 2, 3, 4, 5 }; // 5�� resize

	arr.resize(10); // ũ�⸦ 5���� 10���� resize

	for (auto arr : arr)
	{
		cout << arr << " "; // 1 2 3 4 5 0 0 0 0 0���
	}
	cout << endl;

	// array�� �����
	cout << arr[0] << endl;		// 1 ���
	cout << arr.at(0) << endl;	// 1 ���
	cout << arr.size() << endl; // 5 ���

	return 0;
}