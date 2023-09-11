#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int testcase, row, col, num, x, y;
int board[51][51];
int visited[51][51];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };

void DFS(int x, int y)
{
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx > row || ny < 0 || ny > col) continue;

        if (visited[nx][ny] == 0 && board[nx][ny] == 1)
        {
            DFS(nx, ny);
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> testcase;

    while (testcase--)
    {
        fill_n(board[0], 51 * 51, 0);
        fill_n(visited[0], 51 * 51, 0);

        int cnt = 0;
        cin >> row >> col >> num;

        for (int i = 0; i < num; i++)
        {
            cin >> x >> y;
            board[x][y] = 1;
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] == 1 && visited[i][j] == 0)
                {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}