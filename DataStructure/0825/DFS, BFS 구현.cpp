#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX_VTXS 200

class AdjMatGraph
{
protected:
	int size;						// 정점의 개수
	vector<char> vertices;			// 정점의 이름
	vector<vector<int>> adj;		// 인접 행렬
	bool visited[MAX_VTXS];         // 정점의 방문 정보
public:
	AdjMatGraph() { reset(size); } // 초기화

	// vertex
	char getVertex(int i) { return vertices[i]; }
	void insertVertex(char name)
	{
		// vertices 배열에 정점 추가해 주고,
		// 하나 추가했으니 size에 + 1 해주기
		if (!isFull())
		{
			vertices[size++] = name;
		}
	}

	// edge
	int getEdge(int i, int j) { return adj[i][j]; }
	void setEdge(int i, int j, int val) { adj[i][j] = val; }
	void insertEdge(int u, int v)
	{
		// 양쪽으로 다 연결해야 함
		setEdge(u, v, 1);
		setEdge(v, u, 1);
	}

	// bool
	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }
	bool isLinked(int u, int v) { return getEdge(u, v) != 0; }

	// Init
	void reset(int n)
	{
		size = 0;
		vertices.resize(n);
		adj.resize(n); // 큰 벡터 
		for (int i = 0; i < n; i++)
		{
			adj[i].resize(n); // 작은 벡터
			for (int j = 0; j < n; j++)
			{
				setEdge(i, j, 0);
			}
		}

		// adj.resize(n, vector<int>(n)); 
		// 한 번에 2차원 배열 벡터 초기화
	}

	void resetVisitied()
	{
		for (int i = 0; i < size; i++)
		{
			visited[i] = false;
		}
	}

	// SearchFunc
	void DFS(int index)
	{
		cout << index << " ";
		visited[index] = true;

		for (int x = 0; x < size; x++)
		{
			// 연결되어야 하고, 방문한 적이 없어야 함
			if (isLinked(index, x) && !visited[x])
			{
				DFS(x);
			}
		}
	}

	void BFS(int index)
	{
		visited[index] = true;

		queue<char> q;
		q.push(index);

		while (!q.empty())
		{
			int i = q.front();
			q.pop();

			cout << i << " ";
			
			for (int v = 0; v < size; v++)
			{
				if (isLinked(i, v) && !visited[v])
				{
					visited[v] = true;
					q.push(v);
				}
			}
		}
	}

	void display()
	{
		cout << "  ";
		for (int i = 0; i < size; i++)
		{
			cout << vertices[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			cout << getVertex(i) << " ";
			for (int j = 0; j < size; j++)
			{
				cout << getEdge(i, j) << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main()
{
	int n, m, temp1, temp2;
	cout << "정점의 개수와 간선의 수 :";
	cin >> n >> m;
	cout << "간선의 시작정점과 끝 정점 :" << endl;

	AdjMatGraph g;

	// n개 만큼 정점 추가
	for (int i = 0; i < n; i++)
	{
		g.insertVertex('A' + i);
	}

	// 간선의 시작 정점과 끝 정점 연결
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1, temp2);
	}

	cout << "인접 행렬로 표현한 그래프" << endl;
	g.display();
	cout << "탐색 => ";
	g.resetVisitied(); // 모든 정점 방문 정보 false로 초기화
	// g.DFS(0);		   // 0부터 탐색 시작
	// g.BFS(0);
}