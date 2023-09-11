#include <iostream>
#include <queue>
using namespace std;

string board[101];
int row, col;
int visited[101][101];
queue<pair<int, int>> q;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
    q.push({ x, y });
    visited[x][y] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;

            if (board[nx][ny] == '1' && visited[nx][ny] == 0)
            {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
}

int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        cin >> board[i];
    }
    BFS(0, 0);
    cout << visited[row - 1][col - 1];
}