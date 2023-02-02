#include <iostream>

using namespace std;

// 네임스페이스를 사용하는 이유 : 같은 이름의 함수나 변수더라도 구별 가능

namespace Myspace
{
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

// 네임스페이스 안에 또 네임스페이스를 쓸 수 있음
namespace Myspace2
{
    namespace Inner
    {
        int doSomething(int a, int b)
        {
            return a * b;
        }
    }
}

int main()
{
    using namespace Myspace;

    cout << doSomething(1, 2) << endl;
    // 28번째 줄에 using문으로 인해 앞에 네임스페이스명 생략 가능

    cout << Myspace2::Inner::doSomething(1, 2) << endl;
    // Myspace2 네임스페이스 안에 Inner라는 네임스페이스 안에 있는 함수 doSomething

    /*
        cout << Myspace1::doSomething(3, 4) << endl;
        네임스페이스 안에 있는 함수를 사용할라면

        1. 네임스페이스명:: 과 같은 형식을 작성하고 함수명을 작성하면 됨
        2. using문 사용
    */
}