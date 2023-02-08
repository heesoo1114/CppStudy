#include <iostream>
#include <vector>

using namespace std;

int main()
{
	typedef double distance_t; // double 자료형의 이름을 distance_t로 선언해 줌
	using distance_t = double; // using문으로도 이름에 자료형을 지정해 줌 (무엇을 넣어주면서 메모리를 차지하는 것이 아님)

	double my_distance;
	distance_t homeToWork;
	distance_t homeToSchool;

	return 0;
}