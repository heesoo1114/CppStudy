#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
		예로 게임을 개발하면서 아이템을 무엇을 가지고 있는지 체크할 때
		아이템 개수에 따라서 bool 변수가 늘어남
		이러면 아이템 소유 상태를 확인할 때 bool 변수 수십백 개를 확인해야 함
		이는 매우 비효율적

		-> bool 변수 말고 unsigned int 변수로 대체하는 건 어떨까?

		int의 크기가 4byte(32bit) 이므로 각 비트 자리에 1 또는 0을 넣어서 아이템 소유 상태를 나타낼 수 있음
	*/

	// <각 아이템 소유 상태 정의>
	const unsigned char opt0 = 1 << 0; // 00000001  아이템0을 소유하고 있는 상태
	const unsigned char opt1 = 1 << 1; // 00000010  아이템1을 소유하고 있는 상태
	const unsigned char opt2 = 1 << 2; // 00000100  아이템2을 소유하고 있는 상태
	const unsigned char opt3 = 1 << 3; // 00001000  아이템3을 소유하고 있는 상태
	
	// char opt 변수마다 각 비트 자리에 다른 위치로 1을 배치함으로써 아이템 소유하고 있다고 알림

	unsigned char items_flag = 0; // 00000000 아이템을 소유하고 있지 않은 상태

	// <아이템 추가>
	items_flag |= opt1; 
	// flag = 00000000으로 (아무 아이템을 가지고 있지 않음)
	// 00000010과 OR 연산을 하여
	// flag를 아이템1을 소유하고 있는 상태인 00000010이 됨
	
	// <아이템 삭제>
	items_flag &= (~opt1);
	// flag = 00000010 (아이템1을 소유하고 있음)
	// 00000010과 11111101(opt1의 보수)을 AND 연산을 하여
	// flag가 아이템1을 소유하고 있는 상태에서 소유하고 있지 않은 상태인 00000000이 됨

	// <아이템의 소유상태에 따라 반대로 만들기>
	items_flag |= opt2; // 아이템2 추가
	// flag = 00000100 (현재 아이템2를 소유중) 

	if ((items_flag & opt2) && !(items_flag &  opt2))
	{
		items_flag ^= opt1;
		// 00000100 ^ 00000010 = 00000110 (아이템1이 없었기 때문에 아이템1 추가)
		items_flag ^= opt2;
		// 00000100 ^ 00000100 = 00000010 (아이템2가 있었기 때문에 아이템2 삭제)
	}
	
	
	cout << bitset<8>(items_flag) << endl; // 00000010 출력

	// <아이템 소유상태 확인하기>
	
	// 아이템1의 소유상태 확인
	if (items_flag & opt1) // 000000010 & 00000010 = 00000010 (2는 true) 
	{
		cout << "have item1" << endl;
	}
	else
	{
		cout << "not have item1" << endl;
	}

	// 아이템2를 가지고 있고, 아이템1을 가지고 있지 않을 때
	if ((items_flag & opt2) && !(items_flag & opt1)) 
	{
		cout << "have item1" << endl;
	}
	else
	{
		cout << "not have item1" << endl;
	}


	return 0;
}