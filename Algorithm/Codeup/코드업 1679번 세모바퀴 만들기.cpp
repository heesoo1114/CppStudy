#include <iostream>
using namespace std;

int main()
{
    bool can = false;
    
    int input = 0;
    cin >> input;
    
    int temp = 0;
    for (int i = 1; i < input; i++)
    {
        for (int j = i; j < input - i; j++) // 두 번째 변의 길이는 첫 번째 변의 길이보다 길어야 하고, 최소 전체 길이의 첫 번째 길이까지 가질 수 있음
        {
            temp = input - i - j;
            if (temp < i + j && temp >= j) // 두 변의 길이가 빗변보다 큼, 빗변의 길이가 두 번째 길이보다 큼
            {
                cout << i << " " << j << " " << temp << endl;
                can = true;
            }
        }
    }

    if (!can) // 한 번도 삼각형을 만들지 못 함
    {
        cout << "-1";
    }
}