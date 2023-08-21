#include <iostream>
using namespace std;

#define MAX_VTXS 200

class AdjMatGraph
{
protected:
	int size;						// ������ ����
	char vertices[MAX_VTXS];		// ������ �̸�
	int adj[MAX_VTXS][MAX_VTXS];	// ���� ���
public:
	AdjMatGraph() { reset(); } // �ʱ�ȭ

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
	
	void reset()
	{
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
		{
			for (int j = 0; j < MAX_VTXS; j++)
			{
				setEdge(i, j, 0);
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