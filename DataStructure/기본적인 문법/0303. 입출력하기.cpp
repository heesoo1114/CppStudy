#include <iostream> 
// # : 전처리기 
// iostream : inputoutputStream

using namespace std;

int main()
{
	char arr[100];

	cout << "What's your name?" << endl; // 출력
	cin >> arr; // 입력
	cout << "hi" << " " << arr << endl; // 출력

	return 0;
}