#include<iostream>
using namespace std;

long long arr[91]{ 0 };

long long func(long long num)
{
    if (num <= 1)
    {
        return num;
    }
    if (arr[num] != 0)
    {
        return arr[num];
    }
    return arr[num] = func(num - 1) + func(num - 2);
}

int main()
{
    int input;
    cin >> input;
    cout << func(input) << endl;
}
