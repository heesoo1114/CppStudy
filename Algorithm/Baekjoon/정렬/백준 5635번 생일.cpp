#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Birthday
{
    string name;
    int year;
    int month;
    int day;

    Birthday(string n, int y, int m, int d)
    {
        name = n;
        year = y;
        month = m;
        day = d;
    }
};

bool cmp(const Birthday& b1, const Birthday& b2)
{
    if (b1.year != b2.year)
        return b1.year > b2.year;
    if (b1.month != b2.month)
        return b1.month > b2.month;
    return b1.day > b2.day;
}

int main()
{
    vector<Birthday> v;

    string name;
    int y, m, d, n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> d >> m >> y;
        Birthday b(name, y, m, d);
        v.push_back(b);
    }

    sort(v.begin(), v.end(), cmp);

    cout << v.front().name << '\n';
    cout << v.back().name << '\n';
}
