#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// ���Լ��� (LIFO) 

	// ����
	stack<int> s;

	s.push(0); // s�� 0 ����
	s.pop();   // s�� ���� �������� ���Ե� ������ ����

	s.top();   // s�� ���� �������� ���Ե� ������ ��ȯ

	s.empty(); // s�� ��������� true �ƴϸ� false�� ��ȯ
	s.size();  // s�� ����� ��ȯ

	s.emplace(0); // push�� ����� ���� (���ʿ��� ���� �Ǵ� �̵� �۾��� ���Ѵٴ� ������ ����)
}
