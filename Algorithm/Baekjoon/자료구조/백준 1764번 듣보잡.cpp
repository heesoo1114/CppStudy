#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<string> s;
    set<string> answer;

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        string input;
        cin >> input;

        s.insert(input);
    }

    for (int i = 0; i < b; i++)
    {
        string input;
        cin >> input;
        if (s.find(input) != s.end())
        {
            answer.insert(input);
        }
    }

    cout << answer.size() << endl;
    for (auto s : answer)
    {
        cout << s << endl;
    }
}