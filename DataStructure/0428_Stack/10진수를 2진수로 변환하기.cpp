#include <iostream>;
#include <string>;
#include <stack>;

using namespace std;

stack<int> s;

int Func(int num)
{
	if (num == 0)
	{
		return 0;
	}

	s.push(num % 2);
	return Func(num / 2);
}

int main()
{
	int num;
	cout << "10진수 입력 : ";
	

	// 예외처리
	try
	{
		cin >> num;

		if (num < 0)
		{
			throw num;
		}
	}
	catch (int n)
	{
		cout << "음수 " << num << " 를 입력하셨습니다. 양수로 입력하세요." << endl;
		return 0;
	}

	Func(num);

	cout << "2진수 변환값: ";
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}