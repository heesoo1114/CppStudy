#include <iostream>
#include <vector>
using namespace std;

#define MAX_VTXS 200

class AdjMatGraph
{
protected:
	int size;						// ������ ����
	vector<char> vertices;			// ������ �̸�
	vector<vector<int>> adj;		// ���� ���
	bool visited[MAX_VTXS];         // ������ �湮 ����
public:
	AdjMatGraph() { reset(size); } // �ʱ�ȭ

	// vertex
	char getVertex(int i) { return vertices[i]; }
	void insertVertex(char name)
	{
		// vertices �迭�� ���� �߰��� �ְ�,
		// �ϳ� �߰������� size�� + 1 ���ֱ�
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
		// �������� �� �����ؾ� ��
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
		adj.resize(n); // ū ���� 
		for (int i = 0; i < n; i++)
		{
			adj[i].resize(n); // ���� ����
			for (int j = 0; j < n; j++)
			{
				setEdge(i, j, 0);
			}
		}

		// adj.resize(n, vector<int>(n)); 
		// �� ���� 2���� �迭 ���� �ʱ�ȭ
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
	cout << "������ ������ ������ �� :";
	cin >> n >> m;
	cout << "������ ���������� �� ���� :" << endl;

	AdjMatGraph g;

	// n�� ��ŭ ���� �߰�
	for (int i = 0; i < n; i++)
	{
		g.insertVertex('A' + i);
	}

	// ������ ���� ������ �� ���� ����
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1, temp2);
	}

	cout << "���� ��ķ� ǥ���� �׷���" << endl;
	g.display();
}