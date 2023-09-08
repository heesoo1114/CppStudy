#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M, K, X;
queue<int> q;
vector<int> visited;
vector<int> result;
vector<vector<int>> adj;

void BFS(int start)
{
    q.push(start);
    visited[start] = 0;

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int j = 0; j < adj[now].size(); j++)
        {
            int next = adj[now][j];

            if (visited[next] == -1)
            {
                q.push(next);
                visited[next] = visited[now] + 1;

                if (visited[next] == K)
                {
                    result.push_back(next);
                }
            }
        }
    }
}

int main()
{
    int temp1, temp2;

    cin >> N >> M >> K >> X;
    adj.resize(N + 1);
    visited.resize(N + 1, -1);

    for (int i = 0; i < M; i++)
    {
        cin >> temp1 >> temp2;
        adj[temp1].push_back(temp2);
    }

    BFS(X);
    sort(result.begin(), result.end());

    if (result.empty())
    {
        cout << "-1" << "\n";
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << "\n";
        }
    }
}