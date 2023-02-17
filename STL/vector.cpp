#include<iostream>
#include<vector>

using namespace std;

int main()
{
	#pragma region 선언

	vector<int> v1; // 비어있는 int형 vector v1 생성

	vector<int> v2(5); // 5개의 원소를 가지는 int형 vector v2 생성 
	// (5개의 원소는 초기화를 해주지 않았기 기본값인 0을 초기화 되어 있음)

	vector<int> v3(5, 2); // 2로 초기화된 5개의 원소를 가지는 int형 vector v3 생성 

	vector<int> v4(2, 6); // 6으로 초기화된 2개의 원소를 가지는 int형 vector v4 생성
	vector<int> v5(v4); // v4를 복사해서 int형 vector v5 생성
	// (벡터 내부에 인자들이 있을 때 가능)

	// 비교연산자로 대소비교 가능

	#pragma endregion

	#pragma region 멤버함수

	int num = 1;
	vector<int> v;
	vector<int> vA;

	v.assign(6, 2); // v에 2로 초기화된 6개의 원소를 할당

	v.at(num);	// v의 num번째 원소를 반환 (점검X 속도 느림)
	v[num];		// v의 num번째 원소를 반환 (점검0 속도 빠름)

	v.front();	// v의 첫 번째 원소 반환
	v.back();	// v의 마지막 원소 반환

	v.clear(); // v의 모든 원소를 제거 (원소만 제거, 메모리는 그대로)

	v.push_back(5); // v의 마지막 원소 뒤에 7이 할당되어 있는 원소 삽입
	v.pop_back();	// v의 마지막 원소 제거

	v.begin();	// v의 첫 번째 원소를 가리킴 
	v.end();	// v의 마지막 원소의 다음을 가리킴 
	v.rbegin(); // v의 마지막 원소를 가리킴 
	v.rend();	// v의 첫 번째 원소의 앞을 가리킴
	// 위 4개의 멤버함수는 interator과 함께 사용하고 반환하는 것이 아닌 가리키는 것임

	v.reserve(num); // num개의 원소를 저장할 위치를 맡아둠 (미리 동적할당을 해줌)
	
	v.resize(num); // 크기를 num으로 변경 (크기가 커졌을 경우 빈 공간에는 기본값인 0으로 초기화)
	v.resize(num, 5); // 크기를 num으로 변경 후 크기가 커졌을 경우 빈 공간은 5로 초기화

	v.size(); // v의 size 반환
	v.capacity(); // v의 capacity 반환	

	vA.swap(v); // vA의 v의 size와 capacity를 스왑해줌 (v2를 capacity가 0인 임시의 객체로 만들어 스왑해줌)
	vector<int>().swap(v); // v의 capacity를 없애줌 

	v.insert(3, 4, 5); // 3번째 위치에 5로 초기화된 4개의 원소 삽입 (뒤에 있는 원소들은 뒤로)
	v.insert(2, 3); // 2번째 위치에 3으로 초기화된 원소 삽입 (삽입한 곳의 iterator 반환)

	vector<int>::iterator iter = v.begin(); 
	v.erase(iter); // iter가 가리키는 원소 제거
	// size만 삭제, capacity는 그대로

	v.empty(); // v가 비어있으면 true 반환. 비어있지 않으면 false 반환
	// vector가 비어있는지에 대한 기준은 size가 0 (capacity와는 상관 X)

	#pragma endregion

	#pragma region capacity와size
	
	v.size();
	// v의 원소의 개수 반환

	v.capacity();
	// 할당된 공간의 크기 반환

	/*
		size 1 => capacity 1
		size 2 => capacity 2
		size 3 => capacity 4
		size 4 => capacity 4
		size 5 => capacity 8
		size 6 => capacity 8
		size 7 => capacity 8
		size 8 => capacity 8
		size 9 => capacity 16

		기존이 size에서 size가 capacity 보다 커지면 
		capacity가 기본의 size * 2 = capacity 할당해줌

		이런식으로 capacity가 변하는 이유는
		push_back()을 할 때 size를 키워야 하는데 이때 항상 동적할당을 해주면 비효율적이기 때문에 미리 정해서 동적할당을 해줌

		capacity : 할당된 메모리의 개수	
		size : 할당된 메모리 안의 요소 개수
	*/

	#pragma endregion

	return 0;
}