#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int>& v)
{
    long long sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }

    cout << sum(v) << endl;
}