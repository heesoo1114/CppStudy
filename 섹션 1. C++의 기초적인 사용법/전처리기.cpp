#include <iostream>

using namespace std;

#define LIKE_APPLE // 이 파일 안에서만 정의

int main()
{
#ifdef LIKE_APPLE // 정의가 되어 있기 때문에 10번째 줄 코드 실행
    cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE // 정의가 되어 있기 Eoansdp 14번쨰 줄 코드 무시
    cout << "ORANGE" << endl;
#endif
}