#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[101] = { 0 };

    int size, cnt;
    cin >> size >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int min, max, num;
        cin >> min >> max >> num;

        for (int j = min; j <= max; j++)
        {
            arr[j - 1] = num;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}