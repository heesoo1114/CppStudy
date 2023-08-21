#include <iostream>
#include <vector>
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
}