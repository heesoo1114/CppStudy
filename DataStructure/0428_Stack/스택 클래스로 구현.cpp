#include <iostream>;

using namespace std;

// #define SIZE 10
class Stack
{
public:
	const static int SIZE = 10;

	Stack(char ch = ' ') :topIndex{ -1 }, name{ ch }
	{
		cout << "Constructing stack " << name << "\n";
	}

	void push(char ch)
	{
		if (topIndex + 1 == SIZE)
		{
			cout << "Stack " << name << " is full" << "\n";
		}

		stackArr[++topIndex] = ch;
	}
	
	char pop()
	{
		if (topIndex == -1)
		{
			cout << "Stack " << name << " is empty" << "\n";
			return 0;
		}
		return stackArr[topIndex--];
	}

private:
	int topIndex;
	char name;
	char stackArr[SIZE];
};

int main()
{
	Stack s1{ 'A' }, s2{ 'B' };
	s1.push('d');
	s1.push('a');

	s2.push('c');
	s2.push('k');

	for (int i = 0; i < 2; i++)
	{
		cout << "Pop s1: " << s1.pop() << "\n";
	}
	
	for (int i = 0; i < 2; i++)
	{
		cout << "Pop s2: " << s2.pop() << "\n";
	}
}