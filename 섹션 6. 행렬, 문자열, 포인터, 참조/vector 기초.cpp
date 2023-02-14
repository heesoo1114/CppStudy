#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		<vector의 장점>

		- 크기를 실행 중에 결정 가능
		- 크기를 아무 때나 resize함수를 사용해서 변경 가능
		- 메모리를 알아서 해제해 줌 (delete 할 필요 없음)
		- 자신의 길이를 알고 있음 (매개변수로 벡터만 보내도 길이 정보를 알 수 있음)
	*/

	vector<int> arr = { 1, 2, 3, 4, 5 }; // 5로 resize

	arr.resize(10); // 크기를 5에서 10으로 resize

	for (auto arr : arr)
	{
		cout << arr << " "; // 1 2 3 4 5 0 0 0 0 0출력
	}
	cout << endl;

	// array와 비슷함
	cout << arr[0] << endl;		// 1 출력
	cout << arr.at(0) << endl;	// 1 출력
	cout << arr.size() << endl; // 5 출력

	return 0;
}