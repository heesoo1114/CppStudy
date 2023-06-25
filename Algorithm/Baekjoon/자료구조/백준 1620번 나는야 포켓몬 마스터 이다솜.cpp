#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<string, int> m;
    vector<string> v;

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        string name;
        cin >> name;
        m.insert(make_pair(name, i));
        v.push_back(name);
    }

    string input;
    for (int i = 0; i < M; i++)
    {
        cin >> input;

        // input이 문자일 때
        if (m.find(input) != m.end())
        {
            cout << m[input] << '\n';
        }
        // input이 숫자일 때
        else
        {
            cout << v[stoi(input) - 1] << '\n';
        }
    }
}