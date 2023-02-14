#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;

	// age�� weight�� ����ü Person�� ��� (����)
};

int main()
{
	Person person;
	person.age = 5;

	Person& ref = person; // ����ü Person ����
	ref.age = 15; // person�� age �����ؼ� �� 15 �Ҵ�
	// ref.age���� '.'�� ��� ���� ��������

	cout << ref.age << endl; // 15 ���

	Person* ptr = &person; // ������ Person �ּ� �־���
	ptr->age = 30;  // �����Ϳ����� '->'�� ��� ���� ������
	(*ptr).age = 20; // '.'�� '*' �� '.'�� �켱������ ���� ������ *ptr�� ��ȣ�� ���ξ� ��
	
	cout << ptr->age << endl; // 20 ���

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << ref2.age << endl; // 45 ���

	cout << &person << endl;
	cout << &ref2 << endl;
	// ���� �ּ� ���

	return 0;
}
