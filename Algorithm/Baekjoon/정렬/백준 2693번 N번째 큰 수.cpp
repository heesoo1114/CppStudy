#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt, input;
    cin >> cnt;
    for (int j = 0; j < cnt; j++)
    {
        vector<int> v;

        for (int i = 0; i < 10; i++)
        {
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(), v.end());
        cout << v[7] << endl;
    }
}