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
	cout << "10���� �Է� : ";
	

	// ����ó��
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
		cout << "���� " << num << " �� �Է��ϼ̽��ϴ�. ����� �Է��ϼ���." << endl;
		return 0;
	}

	Func(num);

	cout << "2���� ��ȯ��: ";
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}