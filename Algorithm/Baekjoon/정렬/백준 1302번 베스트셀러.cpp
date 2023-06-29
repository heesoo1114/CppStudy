#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<string, int> m;
    string input;
    int bookCount;
    cin >> bookCount;

    for (int i = 0; i < bookCount; i++)
    {
        cin >> input;
        m[input]++;
    }

    int max = 0;
    string answer = "";
    for (auto s : m)
    {
        if (max < s.second)
        {
            max = s.second;
            answer = s.first;
        }
    }

    cout << answer << endl;
}