#include <iostream>
#include <string>
#include <map>
using namespace std;

int testcase, n, result;
string name, tag;
map<string, int> m;

int main() 
{
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        result = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> tag;
            m[tag]++;
        }

        for (const auto& iter : m)
        {
            result *= (iter.second +1);
        }

        cout << result - 1 << '\n';
        m.clear();
    }
}