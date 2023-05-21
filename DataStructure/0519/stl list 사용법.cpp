#include <iostream>
#include <list>
using namespace std;

#pragma region "stl list ����"
int main()
{
	// list ���� 
	list <int> l1;
	list <int> l2(5, 3); // 5���� ���Ҹ� 3���� �ʱ�ȭ
	list <int> l3{2,4}; // 2, 4�� �ʱ�ȭ

	// �� �߰�
	l3.push_front(1); // ����Ʈ�� �� �տ� �� �߰�
	l3.push_back(5); // ����Ʈ�� �� ���� �� �߰�
	list<int>::iterator iter = l3.begin(); // �ݺ��ڰ� ù��° ���� ����Ŵ
	iter++; // �ι�° �� ����Ŵ
	iter++;// ����° �� ����Ŵ
	l3.insert(iter, 3); // �ݺ��ڰ� ����Ű�� ���� �� �߰�

	for (auto n : l3)
	{
		cout << n;
	}
	cout << endl;

	// �� ���� 
	l3.pop_front(); // ����Ʈ �� �� ���� 
	l3.pop_back(); // ����Ʈ �� �� ����
	cout << l3.size() << endl; // ����Ʈ�� ��� �ִ� ���� ���� ��ȯ
	cout << l3.empty() << endl; // ����Ʈ�� ��������� 1, �ƴϸ� 0 ��ȯ
	l3.erase(iter); // �ݺ��ڰ� ����Ű�� ���� �����ϰ� �� ���� ������ ��ġ�� ��ȯ

	for (auto n : l3)
	{
		cout << n;
	}

}
#pragma endregion