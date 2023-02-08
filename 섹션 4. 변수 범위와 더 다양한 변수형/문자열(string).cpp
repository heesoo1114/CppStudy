#include <iostream>
#include <limits>
#include <string> // string에 대한 다양한 기능 사용하게 해주는 헤더파일

using namespace std;

int main()
{
	string a = "Hello, World";
	char a2 [] = "Hello, World";
	string a3 { "Hello, World" };

	a.length(); // a의 글자수 반환 (12)
	// 문자열 끝에 "\0"은 세지 않는데 
	// char 배열을 보면 13

	#pragma region cin입력

	cout << "Your name ? : ";
	string name;
	cin >> name; // yoon heesoo 입력 시 yoon만 name에 들어가고 남은 heesoo는 버퍼로 이동
	cout << name << endl; // yoon 출력

	cout << "Your age ? : ";
	string age;
	cin >> age; // 입력을 받지 않고 버퍼에 남아있던 heesoo를 가져와서 age에 넣음
	cout << "\n" << age << endl; // heesoo 출력
	
	/*
		형태 : cin >> 변수명

		- 공백 단위로 입력 받음
		- 줄바꿈 문자는 읽지 않으며 버퍼에 남김
	*/

	// 이 문제를 위해서 getline을 사용하면 좋음

	#pragma endregion

	#pragma region getline

	cout << "Your name ? : ";
	string name1;
	getline(cin, name1); // yoon heesoo 입력 시 yoon heesoo 입력

	cout << "Your age ? : ";
	string age1;
	getline(cin, age1); // 1 3 입력 시 1 3 입력

	/*
		함수형태 : getline(입력받을 파일, 받을 string 변수)

		- getline은 공백도 받으며 줄 단위로 입력을 받음
		- 라인 단위로 받음
		- 줄바꿈 문자가 나올 때까지 읽음
		- 줄바꿈 문자 또한 읽으며 읽은 줄바꿈 문자를 null로 바꿔서 저장
		- 줄바꿈 문자도 버퍼에 남기지 않음
	*/

	#pragma endregion

	#pragma region 주의사항

	cout << "Your age ? : ";
	int age2;
	cin >> age2; // 3 입력 시 3은 age로 들어가고 줄바꿈 문자를 버퍼에 남김

	cout << "Your name ? : ";
	string name2;
	getline(cin, name2); // 줄바꿈 문자를 null로 바꿔 name에 넣음

	/*
		cin과 getline의 가장 큰 차이점인 줄바꿈 문자를 읽냐 안 읽냐에 대한 문제임

		cin으로 입력을 받을 때 줄바꿈 문자를 버퍼에 남기는데
		다음 getline에서 입력을 받을 때 getline은 줄바꿈 문자를 읽어들이기 때문에 줄바꿈 문자를 null로 바꾸어서 name에 넣음

		-> 이 문제를 해결하기 위해서 cin.ignore을 사용해 버퍼를 비워주어야 함
	*/

	cout << "Your age ? : ";
	int age3;
	cin >> age3; // 3 입력 시 3은 age로 들어가고 줄바꿈 문자를 버퍼에 남김

	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 

	cout << "Your name ? : ";
	string name3;
	getline(cin, name3); // 정상 입력

	/*
		cin.ignore(무시할 문자의 최대개수(byte), 해당 문자가 나올 때까지 무시(해당 문자 포함))

		해당 문자를 만나기 전까지 무시할 문자의 최대 개수만큼 무시
	*/

	#pragma endregion

	#pragma region 문자열덧셈

	string ex1("Hello, ");
	string ex2("World!");

	std::cout << ex1 + ex2 << endl; // Hello, World! 출력

	string ex3 = ex1 + ex2; // ex3 = "Hello, World!"
	ex3 += " Im happy!"; // ex3 = "Hello, World! Im happy!"

	#pragma endregion


	return 0;
}