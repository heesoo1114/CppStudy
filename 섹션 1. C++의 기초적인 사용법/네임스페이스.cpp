#include <iostream>

using namespace std;

// ���ӽ����̽��� ����ϴ� ���� : ���� �̸��� �Լ��� �������� ���� ����

namespace Myspace
{
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

// ���ӽ����̽� �ȿ� �� ���ӽ����̽��� �� �� ����
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
    // 28��° �ٿ� using������ ���� �տ� ���ӽ����̽��� ���� ����

    cout << Myspace2::Inner::doSomething(1, 2) << endl;
    // Myspace2 ���ӽ����̽� �ȿ� Inner��� ���ӽ����̽� �ȿ� �ִ� �Լ� doSomething

    /*
        cout << Myspace1::doSomething(3, 4) << endl;
        ���ӽ����̽� �ȿ� �ִ� �Լ��� ����Ҷ��

        1. ���ӽ����̽���:: �� ���� ������ �ۼ��ϰ� �Լ����� �ۼ��ϸ� ��
        2. using�� ���
    */
}