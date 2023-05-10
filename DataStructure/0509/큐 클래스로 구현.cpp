#include <iostream>
using namespace std;

class Queue
{
public:
	int* buf; // �����
	int qSize; // ť�� ũ��
	int front; // ���� �ε��� ���� ����Ŵ
	int rear; // ���� �ֱٿ� ������ �ڷḦ ����Ŵ

	void InitQueue(int qSize)
	{
		this->qSize= qSize;
		buf = new int[qSize];
		front = rear = -1;
	}

	void Enqueue(int data)
	{
		if (IsFull())
		{
			cout << "�� á���ϴ�." << endl;
			return;
		}

		rear = rear + 1;
		buf[rear] = data;
	}

	int Dequeue()
	{
		if (IsEmpty())
		{
			cout << "ť�� �����\n";
			return -1;
		}

		front++;
		return buf[front];
	}

	int IsFull()
	{
		return rear == qSize - 1;
	}

	int IsEmpty()
	{
		return rear == front;
	}
};

int main()
{
	int i;
	Queue q1;
	q1.InitQueue(10);
	for (i = 1; i <= 11; i++)
	{
		cout << i << "�Է�\n";
		q1.Enqueue(i);
	}
	cout << endl;
	
	while (!q1.IsEmpty())
	{
		cout << q1.Dequeue() << "  ���\n";
	}
	cout << endl;
	return 0;
}