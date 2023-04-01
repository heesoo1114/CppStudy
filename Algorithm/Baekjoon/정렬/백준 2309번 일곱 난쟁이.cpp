#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[9];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    sum -= 100;

    for (int i = 0; i < 9; i++)
    {
        bool isFind = false;
        for (int j = 0; j < 9; j++)
        {
            if (i == j) continue;

            if (arr[i] + arr[j] == sum)
            {
                isFind = true;

                arr[i] = 0;
                arr[j] = 0;

                break;
            }
        }

        if (isFind) break;
    }

    sort(arr, arr + 9);

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << endl;
        }
    }
}