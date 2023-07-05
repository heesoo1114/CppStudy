#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[3] = { 1, 0, 0 };

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int a, b;
        cin >> a >> b;
        swap(arr[a - 1], arr[b - 1]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            cout << i + 1 << endl;
        }
    }
}