#include <iostream>

using namespace std;

int main()
{
	cin.good(); // 입력하는 과정에서 오류가 없으면 true 반환, 오류가 있으면 false 반환 (goodbit가 설정되어 있는 상태)
	cin.eof(); // 입력하는 과정에서 파일의 끝이라는 뜻으로 더 이상 읽을 문자가 없을 때 에러 반환 (eofbit가 설정되어 있는 상태)
	cin.bad(); // 입력하는 과정에서 스트림이 물리적으로 손상되어 더 이상 문자를 읽을 수 없을 때 에러 반환 (badbit가 설정되어 있는 상태)
	cin.fail(); // 입력하는 과정에서 오류가 있으면 true 반환, 오류가 없으면 false 반환 (failbit가 설정되어 있는 상태)
	cin.clear(); // cin의 내부 상태의 플래그 값을 초기화 시킴 (cin 관련 기능이 정상 작동하도록 해줌)
	cin.ignore(32767, '\n'); // 입력 버퍼를 비워줌 (무시할 문자 최대길이, 무시할 때 마지막의 기준이 되는 문자(+이 문자를 만날 때까지 무시함))

	return 0;
}