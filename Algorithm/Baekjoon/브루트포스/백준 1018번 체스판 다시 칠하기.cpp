#include <iostream>
#include <algorithm>
using namespace std;

// ��� ���� ü����
string WB[8] =
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
// ������ ���� ü����
string BW[8] =
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
// �Է¹��� ü����
string input[50];

int count(int x, int y)
{
    int blCnt = 0;
    int whCnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // �Է¹��� ü������ (i + x)���� (j + y)�� ���ڿ� ���� �ִ� ü���ǵ�� ��
            if (input[i + x].at(j + y) != WB[i][j]) whCnt++;
            if (input[i + x].at(j + y) != BW[i][j]) blCnt++;
        }
    }

    return min(blCnt, whCnt);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int min_cnt = 100000;
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i + 8 <= x; i++)
    {
        for (int j = 0; j + 8 <= y; j++)
        {
            int temp = count(i, j);
            if (temp < min_cnt)
            {
                min_cnt = temp;
            }
        }
    }

    cout << min_cnt << "\n";
}
