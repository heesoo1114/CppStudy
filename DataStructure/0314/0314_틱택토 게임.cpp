#include<iostream>
#include <algorithm>
using namespace std;

void Init(char board[][3])
{
	// board �ʱ�ȭ
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = 0;
		}
	}
}

void Draw(char board[][3])
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << board[x][y] << " ";
		}
		cout << endl;
	}
}

bool isClear(char board[][3])
{
	bool isClear = false;

	for (int x = 0; x < 3; x++)
	{
		if (board[x][0] == '@')
		{
			continue;
		}

		if (board[x][0] == board[x][1] && board[x][1] == board[x][2])
		{
			isClear = true;
		}
	}

	for (int y = 0; y < 3; y++)
	{
		if (board[0][y] == '@')
		{
			continue;
		}

		if (board[y][0] == board[y][1] && board[y][1] == board[y][2])
		{
			isClear = true;
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		if (!(board[0][0] == '@'))
		{
			isClear = true;
		}
	}
	
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		if (!(board[0][0] == '@'))
		{
			isClear = true;
		}
	}

	return isClear;
}

int TurnChange(int player)
{
	if (player == 1)
	{
		++player;
	}
	else if (player == 2)
	{
		--player;
	}

	return player;
}

bool SaveTemp(int player, char board[][3], int x, int y)
{
	bool isOver = false;

	if (board[x][y] == '@') isOver = false;
	else isOver = true;

	if (player == 1)
	{	
		board[x][y] = 'O';
	}
	else if (player == 2)
	{
		board[x][y] = 'X';
	}

	return isOver;
}

int main()
{
	int player = 1;
	char board[3][3];

	fill(&board[0][0], (&board[2][2] + 1), '@');
	// board[0][0]�� ù ��° �ڸ�, board[2][2] + 1�� �迭�� ������ ��°, ä�� ��

	int x, y;

	while (true)
	{
		player = TurnChange(player);

		cout << "x, y ��ǥ�� �Է��ϼ���(x, y) : ";
		cin >> x >> y;

		bool isFail = false;
		if (SaveTemp(player, board, x, y))
		{
			cout << "�ٽ� �Է��ϱ�" << endl;
			continue;
		}

		cout << endl;
		Draw(board); // �׸���

		// ���� ���� üũ
		if (isClear(board))
		{
			cout << "Player : " << player << " �¸� �����մϴ�" << endl;
			cout << "���� ����" << endl;
			break;
		}

		cout << endl;
		cout << "------------------------------" << endl;
	}
}