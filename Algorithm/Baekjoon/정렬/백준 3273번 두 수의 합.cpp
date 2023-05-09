#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> v;

    int cnt = 0;

    int nCnt;
    cin >> nCnt;

    for (int i = 0; i < nCnt; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int target;
    cin >> target;

    sort(v.begin(), v.end());

    int minPointer = 0;
    int maxPointer = v.size() - 1;

    for (int i = 0; i < v.size(); i++)
    {
        int temp = v[minPointer] + v[maxPointer];

        if (minPointer >= maxPointer) break;

        if (temp == target)
        {
            ++cnt;
            --maxPointer;
        }
        else if (temp > target)
        {
            --maxPointer;
        }
        else if (temp < target)
        {
            ++minPointer;
        }
    }

    cout << cnt << endl;
}
