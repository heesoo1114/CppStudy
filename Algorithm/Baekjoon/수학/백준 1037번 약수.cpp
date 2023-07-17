#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt;
    cin >> cnt;

    int min = 1000000;
    int max = 0;

    for (int i = 0; i < cnt; i++)
    {
        int input;
        cin >> input;

        if (min > input)
        {
            min = input;
        }

        if (max < input)
        {
            max = input;
        }
    }

    cout << min * max << endl;
}