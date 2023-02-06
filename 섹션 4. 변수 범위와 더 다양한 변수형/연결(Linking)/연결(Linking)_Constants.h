/*
namespace Constants
{
	const double pi(3.141592);
	const double gravity(9.8);
}
	extern이 붙지 않은 상태이기 때문에 메모리를 공유하고 있지 않음
	이름만 같고 서로 다른 변수로 사용해야 함
	단순히 해당 헤더파일에서 복사해 옴

	이 방식도 좋지만 해당 헤더파일을 수백 번 사용하면 pi, gravity 변수의 복사본만 늘어남 (메모리 낭비)
	-> 따라서 메모리 낭비를 막기 위해서 const는 값이 바뀌지 않는 상수이기 때문에 extern을 사용하여 메모리를 공유할 수 있게 해주는 것이 좋음

namespace Constants1
{
	extern const double pi2(3.141592);
	extern const double gravity2(9.8);
}
	pi2와 gravity2의 메모리를 공유하게 됨
*/

namespace Constants2
{
	extern const double pi3;
	extern const double gravity3;
}
/*
	일반적인 상황 예시

	위와 같이 전역변수 선언을 헤더파일에서 해주고
	전역변수 선언은 해당 헤더파일과 같은 이름의 cpp 파일에서 해줌
	
	int main()
	{
		Constants2::pi3 = 3.141592;
		Constants2::gravity3 = 9.8;
	}
*/