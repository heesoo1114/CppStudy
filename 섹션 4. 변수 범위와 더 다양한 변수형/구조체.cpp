#include <iostream>

using namespace std;

struct Person 
{
    double height = 170.0; // �⺻���� 170����
    float weight = 50.f; // �⺻�� 50
    int age = 20; // �⺻�� 20
    string name = "Heesoo"; // �⺻�� Heesoo 

    void printPerson()
    {
        cout << height << " " << weight << " " << age << " " << name;
        cout << endl;
    }
};

void printPerson(Person p)
{
    cout << p.height << " " << p.weight << " " << p.age << " " << p.name;
    cout << endl;
}

int main()
{
    // ���� �ʱ�ȭ
    Person a;
    a.height = 175;
    a.weight = 60;
    a.age = 17;
    a.name = "James";

    // ������ ���ÿ� �ʱ�ȭ
    Person b{ 175.0, 55.0f, 15, "Nick" };

    Person me; // �ʱ�ȭ�� ������ �ʾұ� ������ ������ �� �⺻���� ��

    printPerson(a); // 175 60 17 James ���
    b.printPerson(); // 175 55 15 Nick ���
    me.printPerson(); // 170 50 20 Heesoo ��� (�⺻�� �״��)

    Person you{ 178.0, 70.0f, 21, "Dany" };
    Person mine = you; // mine�� you�� ������� ���� ���� (+string ���� ��ü�� ���簡 ����� �� �� �� ����)
    mine.printPerson(); // 178 70 21 Dany ���

    struct Employee
    {
        short id;       // 2byte | O O X X
        int age;        // 4byte | O O O O 
        double wage;    // 8byte | O O O O O O O O

        /*
            O O X X   
            O O O O
            O O O O
            O O O O

            4byte ������ ����� �ϱ� ������ 2byte�� �е����� �������
        */
    }; 

    Employee employee;
    cout << sizeof(employee) << endl; // 16 ���

	return 0;
}