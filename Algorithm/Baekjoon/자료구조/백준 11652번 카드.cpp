#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<long long, long long> m;

    long long cnt, answer;
    cin >> cnt;

    for (long long i = 0; i < cnt; i++)
    {
        long long input;
        cin >> input;

        m[input]++;
    }

    long long max = 0;
    for (auto iter : m)
    {
        if (max < iter.second)
        {
            max = iter.second;
            answer = iter.first;
        }
    }

    cout << answer << endl;
}