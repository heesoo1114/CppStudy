#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    queue<int> q;
    vector<int> v;

    int cnt, L, W, input, totalW = 0, T = 0;
    cin >> cnt >> L >> W;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    for (int i = 0; i < cnt; i++)
    {
        while (true)
        {
            if (L == q.size())
            {
                totalW -= q.front();
                q.pop();
            }
            if (totalW + v[i] <= W)
                break;

            q.push(0);
            T++;
        }

        q.push(v[i]);   // 큐에 트럭 추가
        totalW += v[i]; // 무게 추가
        T++;            // 시간 추가
    }
    T += L;
    cout << T;
}