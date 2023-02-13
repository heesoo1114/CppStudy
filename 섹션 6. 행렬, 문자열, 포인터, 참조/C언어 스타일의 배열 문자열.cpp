#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "Heesoo";
	// "Heesoo" 6글자로 sizeof(str)가 7이 나오는 이유는 
	// 문자열 뒤에 끝을 알리는 "\0"이 끝에 달려 있음

	char str2[100]; // 100개의 문자가 들어갈 수 있는 char형 배열
	cin >> str2; // Heesoo 입력 (공백 단위로 입력받음)
	str2[0] = 'h'; // 배열의 첫 번째 원솟값을 h로 변경해 줌 (H -> h)

	char str3[100];
	cin.getline(str3, 100); // Hi. I'm heesoo yoon 입력 (cin.getline은 공백을 포함하여 입력을 받음)
	// 매개변수 -> (저장할 변수명, 저장할 문자의 최대 개수)
	
	string str4;
	getline(cin, str4, '\n');
	// cin.getline과 다르게 최대 개수를 입력하지 않아도 됨
	// 추가로 문자를 입력해 해당 문자를 만날 때까지 입력 받음
	// 함수형태 -> getline(입력스트림 오브젝트, 저장할 string 변수명, 종결 문자(구분자));

	char a, b;
	a = cin.get(); 
	b = cin.get();
	// get 함수는 표준 입력 버퍼에서 문자를 하나만 가져옴
	// 문자는 하나만 입력 가능 (공백, 개행 포함)

	char strA[] = "copy";
	char strB[20];

	strcpy(strB, strA); // strB 배열에 strA의 값을 복사

	/*
		cstring 라이브러리에 있음 
	
		strcpy(A, B) : B값을 A로 복사
		strcat(A, B) : B값을 A 뒤로 복사
		strcmp(A, B) : 문자열 비교 (-1, 0, 1 반환)
	*/

	return 0;
}