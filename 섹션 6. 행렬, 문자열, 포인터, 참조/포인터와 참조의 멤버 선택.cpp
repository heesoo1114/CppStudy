#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;

	// age와 weight는 구조체 Person의 멤버 (변수)
};

int main()
{
	Person person;
	person.age = 5;

	Person& ref = person; // 구조체 Person 참조
	ref.age = 15; // person의 age 접근해서 값 15 할당
	// ref.age에서 '.'은 멤버 접근 연산자임

	cout << ref.age << endl; // 15 출력

	Person* ptr = &person; // 포인터 Person 주소 넣어줌
	ptr->age = 30;  // 포인터에서는 '->'이 멤버 접근 연산자
	(*ptr).age = 20; // '.'과 '*' 중 '.'이 우선순위가 높기 때문에 *ptr을 괄호로 감싸야 함
	
	cout << ptr->age << endl; // 20 출력

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << ref2.age << endl; // 45 출력

	cout << &person << endl;
	cout << &ref2 << endl;
	// 같은 주소 출력

	return 0;
}
