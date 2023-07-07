#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int size, cnt;
    cin >> size >> cnt;

    int arr[101];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    int a, b;
    for (int i = 0; i < cnt; i++)
    {
        cin >> a >> b;

        for (int j = a; j <= b; j++)
        {
            swap(arr[a - 1], arr[b - 1]);
            a++;
            b--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}