#include <iostream>
// #include <cstdint> c++11 이후부터 사용 가능

using namespace std;

int main()
{
	std::int16_t i(5);
	// int16_t: 데이터 타입을 16bit, 즉 2 byte 데이터 타입의 int 로 바꿔줌

	std::int8_t myint = 65;
	cout << myint << endl;  // A 출력
	/*
		int8_t : 데이터 타입을 8bit, 즉 1byte 데이터 타입의 int로 바꿔줌

		+ 8bit 짜리 int는 signed char
	*/
	
	std::int_fast8_t fi(5);
	// int_fast8_t : 데이터 타입을 8bit 중 가장 빠른(fast) 데이터 타입으로 바꿔줌
	
	std::int_least64_t fl(5);
	// int_least64_t : 데이터 타입을 최소 64bit를 갖는 데이터 타입으로 바꿔줌
	
	return 0;
}