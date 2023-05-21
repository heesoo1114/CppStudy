#include <iostream>
#include <string>
#include <map>
using namespace std;

string tag;
int tagCount;
map<string, float> m;

int main()
{
    #pragma region FAST
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #pragma endregion

    while (getline(cin, tag))
    {
        m[tag]++;
        tagCount++;
    }

    cout << fixed;
    cout.precision(4);

    for (const auto& iter : m)
    {
        float temp = (iter.second * 100) / tagCount;
        cout << iter.first << " " << temp << endl;
    }
}
