#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<bool>visited(200, false);

void DFS(int n, int v, vector<vector<int>> linked)
{
    visited[v] = true;

    for (int i = 0; i <= n; i++)
    {
        if (linked[v][i] == 1 && visited[i] == 0)
        {
            DFS(n, i, linked);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFS(n, i, computers);
            answer++;
        }
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> computers;
    computers.resize(n, vector<int>(n, 0));

    cout << solution(n, computers) << endl;
}