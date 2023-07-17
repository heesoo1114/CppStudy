#include<iostream>
#include<set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<int> s;
    int cnt;

    for (int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;

        if (s.find(input % 42) == s.end())
        {
            s.insert(input % 42);
        }
    }

    cout << s.size() << endl;
}