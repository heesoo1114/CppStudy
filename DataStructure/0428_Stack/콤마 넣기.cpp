#include <iostream>;
#include <string>;
#include <stack>;

using namespace std;

stack<char> s;
int main()
{
    int num, cnt=0;
    cin >> num;
    while (num)
    {
        s.push(num % 10 + '0');
        cnt++;
        num /= 10;
        if (num != 0 && cnt == 3)
        {
            s.push(',');
            cnt = 0;
        }

    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}