#include<iostream>
using namespace std;

int main()
{
	int v, h;
	cin >> v >> h;

	for (int i = 1; i <= h; i++) // ����
	{
		for (int j = 1; j <= v; j++) // ����
		{
			if (i == 1 || i == h) // ù ��° ���̰ų� ������ ��
			{
				if (j == 1 || j == v) // �������� ó���� ������
				{
					cout << "+";
				}
				else 
				{
					cout << "-";
				}
			}
			else 
			{
				if (j == 1 || j == v) // �������� ó���� ������
				{
					cout << "|";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	return 0;
}