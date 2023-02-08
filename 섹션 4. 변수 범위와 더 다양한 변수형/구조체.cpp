#include <iostream>

using namespace std;

struct Person 
{
    double height = 170.0; // 기본값을 170으로
    float weight = 50.f; // 기본값 50
    int age = 20; // 기본값 20
    string name = "Heesoo"; // 기본값 Heesoo 

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
    // 각각 초기화
    Person a;
    a.height = 175;
    a.weight = 60;
    a.age = 17;
    a.name = "James";

    // 생성과 동시에 초기화
    Person b{ 175.0, 55.0f, 15, "Nick" };

    Person me; // 초기화를 해주지 않았기 때문에 설정해 준 기본값이 들어감

    printPerson(a); // 175 60 17 James 출력
    b.printPerson(); // 175 55 15 Nick 출력
    me.printPerson(); // 170 50 20 Heesoo 출력 (기본값 그대로)

    Person you{ 178.0, 70.0f, 21, "Dany" };
    Person mine = you; // mine에 you의 멤버값이 각각 복사 (+string 같이 객체는 복사가 제대로 안 될 수 있음)
    mine.printPerson(); // 178 70 21 Dany 출력

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

            4byte 단위로 맞춰야 하기 때문에 2byte를 패딩으로 집어넣음
        */
    }; 

    Employee employee;
    cout << sizeof(employee) << endl; // 16 출력

	return 0;
}