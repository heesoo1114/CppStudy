#include <iostream>
using namespace std;

class Queue
{
public:
	int* buf; // 저장소
	int qSize; // 큐의 크기
	int front; // 꺼낼 인덱스 앞을 가리킴
	int rear; // 가장 최근에 보관된 자료를 가리킴

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
			cout << "꽉 찼습니다." << endl;
			return;
		}

		rear = rear + 1;
		buf[rear] = data;
	}

	int Dequeue()
	{
		if (IsEmpty())
		{
			cout << "큐가 비었음\n";
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
		cout << i << "입력\n";
		q1.Enqueue(i);
	}
	cout << endl;
	
	while (!q1.IsEmpty())
	{
		cout << q1.Dequeue() << "  출력\n";
	}
	cout << endl;
	return 0;
}