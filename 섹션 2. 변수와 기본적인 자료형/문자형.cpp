#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// 아스키 코드에 따라 char 문자들은 내부적으로 정수에 대응되어 있음

	char c1 = 65;
	char c2 = 'A'; 

	// ex1
	cout << char(65) << endl; // A 출력
	cout << int('A') << endl; // 65 출력

	// ex2
	cout << static_cast<char>(65) << endl; // A 출력, 정수형 -> 문자형
	cout << static_cast<int>('A') << endl; // 65 출력, 문자형 -> 정수형

	/*
		형변환을 두가지 예시를 작성했다
		
		ex1 과 ex2의 차이점을 알아보자

		ex1 : 강제로 형변환
		ex2 : 형변환하기 전에 컴파일러한테 형변환을 해도 되는지 물어보고 요청
	*/

	#pragma region char입력

	char c5('A');

	cin >> c5; // abc 입력
	cout << c5 << " " << static_cast<int>(c5) << endl; // a 97 출력
	// a를 정수형으로 변환하여 출력
	// char 변수는 1개의 문자를 받는 데이터 타입임
	// 그래서 a를 제외한 b와 c는 버퍼에 남아있음

	cin >> c5; // 입력이 아닌 입력버퍼에 남아있던 b가 c5로 저장
	cout << c5 << " " << static_cast<char>(c5) << endl; // b b 출력
	// 변환할 타입에 문자열을 넣어주었의 b를 문자열로 변환한 b가 출력
	// 이제 b를 제외한 c만 버퍼에 남음

	cin >> c5; // 입력이 아닌 입력버퍼에 남아있던 c가 c5로 저장
	cout << c5 << " " << static_cast<int>(c5) << endl; // c 99 출력

	#pragma endregion

	cout << sizeof(char) << endl;
	cout << (int)numeric_limits<char>::max() << endl; // 127 출력
	cout << (int)numeric_limits<char>::min() << endl; // -128 출력

	/*
		\n : 
		- 문자
		- 줄바꿈

		endl :
		- 줄바꿈 
		- 버퍼 비우기
		- 줄바꿈과 동시에 버퍼에 있는 것들을 무조건 다 출력한 후 줄바꿈

		flush :
		- 버퍼 비우기

		\" = "
	*/

	return 0;
}