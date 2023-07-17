#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<pair<int, string>> v;

    int cnt;
    cin >> cnt;

    int inputA;
    string inputB;
    for (int i = 0; i < cnt; i++)
    {
        cin >> inputA >> inputB;
        v.push_back({ inputA, inputB });
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < cnt; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}