#include <iostream>

using namespace std;

// 1byte = 8bit

int main()
{
	#pragma region Character
	
	// 문자열, (+정수)

	char Character_a = 65; // 최소 1byte (8bit) (한글 출력 불가능)
	char16_t Character_b;; // 최소 2byte (16bit) (한글 출력 가능)
	char32_t Character_c;; // 최소 4byte (32bit)
	wchar_t Character_d; // char 변수가 표현할 수 있는 최대 크기의 문자세트
	/*
		char은 문자열 변수

		char는 정수이기도 함 (Integer) (-> sigend char)
		-> ASCII에 대응하기 때문 (char 변수 char_a 출력시 A 출력)

		wchar_t 변수는 *유니코드*를 저장하는 데 사용되는 16비트 와이드 문자를 나타냄
	*/
	
	#pragma endregion

	#pragma region Integer
	
	// 정수

	// signed (-, 0, +)

	signed char Integer_a; // 최소 1byte (8bit), char과 같은 크기
	short Integer_b; // 최소 2byte (16bit), char보다 작지 않음
	int Integer_c; // 최소 2byte (16bit), short보다 작지 않음, 대부분이 4byte
	long Integer_d; // 최소 4byte (32bit), int보다 작지 않음
	long long Integer_e; // 최소 8byte (64bit), long보다 작지 않음 


	// unsigned (0, +)

	unsigned char IntegerU_a; // 최소 1byte (8bit), char과 같은 크기
	unsigned short IntegerU_b; // 최소 2byte (16bit), char보다 작지 않음
	unsigned int IntegerU_c; // 최소 2byte (16bit), short보다 작지 않음, 대부분이 4byte
	unsigned long IntegerU_d; // 최소 4byte (32bit), int보다 작지 않음
	unsigned long long IntegerU_e; // 최소 8byte (64bit), long보다 작지 않음 

	
	/*
		signed와 unsigned

		- signed는 음수 지원, unsigned는 음수를 지원하지 않음
		- unsigned는 signed보다 빠름
		- 저장되는 방식이 서로 다름
		- signed는 생략이 가능하지만 unsigned는 생략이 불가능
	*/

	#pragma endregion

	#pragma region Floating-point
	
	float Float_a; // 4byte (32bit) (1.0f)
	double Float_b; // 8byte (64bit) 
	long double Float_c; // 16byte (128bit)

	// 본인보다 크기가 작은 애들보다 정확도가 높음

	#pragma endregion

	#pragma region 변수형초기화방법과크기구하기

	bool bV = false;
	char chV = 65;
	float fV = 3.141592f; // f를 쓰지 않으면 double로 인식
	double dV = 3.141592;

	auto aV = 3.141592; // aV가 double 변수로 자동인식
	auto aV2 = 3.141592f; // aV2가 float 변수로 자동인식


	// sizeof : 변수의 데이터 크기를 알려주는 함수
	cout << sizeof(aV) << endl; // double 변수이므로 8 출력
	cout << sizeof(aV2) << endl; // float 변수이므로 4 출력

	#pragma endregion

	#pragma region 다양한초기화방법

	int a = 123;
	// copy initialization
	// 제일 기본적이고 많이 사용하는 초기화 방법

	int b(123); 
	// direct initialization
	// 잘못된 값을 넣어도 형변환을 해줌

	int c{ 123 }; 
	// uniform initialization
	// 잘못된 값을 넣어도 형변환을 해주지 않음

	int d = (int)3.141592; // -> 3
	int e((int)3.141592); // -> 3
	// 값 앞에 소괄호 안에 데이터 타입을 써주면 형변환이 가능
	// -> 작은 데이터 타입에서 큰 데이터 타입으로는 형변환이 불가능

	int k, l, m = 2;  // k, l은 2로 초기화가 안됨. m만 2로 초기화됨
	int a1 = 1, a2, a3; // 초기화 하지 않는 변수들은 뒤에다 써주는 것이 좋음

	#pragma endregion

	return 0;
}