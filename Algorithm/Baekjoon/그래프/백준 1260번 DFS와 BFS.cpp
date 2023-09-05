#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj; // ���� ���
bool visited[1001];		 // ������ �湮 ����
int N, M, V, tempA, tempB;

queue<int> q;

void reset()
{
	for (int i = 1; i <= N; i++)
	{
		visited[i] = 0;
	}
}

void DFS(int index)
{
	cout << index << " ";
	visited[index] = true;

	for (int i = 1; i <= N; i++)
	{
		// ����Ǿ� �ְ�, �湮�� ���� ����� ����
		if (adj[index][i] == 1 && visited[i] == 0)
		{
			DFS(i);
		}
	}
}

void BFS(int index)
{
	cout << index << " ";
	q.push(index);
	visited[index] = true;

	int j = 0;
	while (!q.empty())
	{
		j = q.front();
		q.pop();

		for (int i = 1; i <= N; i++)
		{
			if (adj[j][i] == 1 && visited[i] == 0)
			{
				q.push(i);
				visited[i] = true;
				cout << i << " ";
			}
		}
	}
}

int main()
{
	cin >> N >> M >> V;
	adj.resize(N + 1, vector<int>(N + 1, 0));

	// ������ ���� ������ �� ���� ����
	for (int i = 0; i < M; i++)
	{
		cin >> tempA >> tempB;
		adj[tempA][tempB] = 1;
		adj[tempB][tempA] = 1;
	}

	reset();
	DFS(V);
	cout << "\n";
	reset();
	BFS(V);
}