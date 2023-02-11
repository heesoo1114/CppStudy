#include <iostream>

using namespace std;

// 여기서의 int scoreList[20]은 포인터임 (배열이 아님) -> 배열 이름을 통해서 주솟값을 받을거라는 것을 알리기 위해서 표시
// 크기를 20으로 지정해 준 것은 딱히 의미가 없음 -> 20크기 짜리의 배열을 받을 포인터라고 알려주는 것뿐
// 함수의 매개변수로 배열은 들어갈 수 없음
// 따라서 크기는 80byte가 아닌 주솟값을 담는 int 하나의 4byte를 가짐 (64bit 환경에서는 8byte라고 함)
// main의 socorList와는 별개의 변수임
void doSomething(int scoreList[20]) 
{
	cout << (int)&scoreList << endl; // 포인터의 포인터가 되고
	cout << (int)&scoreList[0] << endl; // 포인터에 배열의 주소를 복사해 와서 배열의 원솟값에 직접 접근할 수 있게 됨
	cout << scoreList[0] << endl;
	cout << scoreList[1] << endl;
	cout << scoreList[2] << endl;
}

int main()
{
	#pragma region 선언과초기화

	int a1[3] = { 1, 2, 3 }; // 기본적인 선언과 초기화
	int a2[] = { 1, 2, 3 }; // 크기를 지정해주지 않았지만 초기화 값의 개수로 배열의 크기를 알 수 있음
	int a3[4] = { 1, 2 }; // 크기가 4로 지정되어 있지만 초기화 값에 2개 밖에 없어도 남은 것들은 0으로 채워짐
	int a4[4]; // 선언은 했지만 초기화는 하지 않은 상태. (쓰레기 값이 들어가 있음)
	int a5[]; // (에러코드) 모든 걸 떠나서 크기를 알 수 없음

	#pragma endregion

	#pragma region 배열의크기

	int b1[5]; // int형 크기의 연속된 5개의 메모리 공간을 가져온다는 의미.
	// 따라서 int형은 4byte에 연속된 5개의 메모리 공간이기 때문에
	// int형 배열 b1의 크기는 4byte * 5개 = 20byte 

	struct Rectangle
	{
		int length;
		int width;

		// 이 구조체의 크기는 8byte
		// int형 변수 2개를 가지고 있음
	};

	Rectangle rect_arr[10]; // Rectangle형 배열 (구조체 배열)
	// Rectangle 구조체는 8byte이기 때문에
	// Rectangle형 배열 rect_arr의 크기는 8byte * 10개 = 80byte 

	#pragma endregion

	#pragma region 크기결정

	int num = 0;
	cin >> num;

	int c1[num]; // (에러코드) 배열의 크기가 컴파일 타임이 아닌 런타임에 결정됨
	// 배열의 크기를 결정하는 num이 사용자의 입력으로 런타임에 결정이 되기 때문에

	int num1 = 2;
	int c2[num1]; // (에러코드) num에 2가 할당되는 건 런타임 때 결정됨
	// 배열의 크기는 컴파일 타임에 결정이 돼야 함

	const int num2 = 3; // 상수는 컴파일 타임에 결정이 되기 때문에 문제가 없음
	int c3[num2]; 

	#pragma endregion

	#pragma region 배열을매개변수로

	const int num_Studendts = 20;

	int scoreList[num_Studendts] = { 1, 2, 3, 4, 5, };  
	// 4byte의 연속적인 int형 변수 20개
	// scoreList의 크기는 80byte

	cout << (int)scoreList << endl;	 // 배열 이름, 배열 첫 번째 원소의 주솟값
	cout << (int)&scoreList << endl; // 배열 이름, 배열 첫 번째 원소의 주솟값  (위 &가 없는 scoreList, 12번째 줄과 같은 역할)
	cout << scoreList[0] << endl;
	cout << scoreList[1] << endl;
	cout << scoreList[2] << endl;

	doSomething(scoreList); // socreList의 첫 번째 원소의 주솟값이 doSomething 함수에 매개변수로 보내짐

	#pragma endregion

	return 0;
}