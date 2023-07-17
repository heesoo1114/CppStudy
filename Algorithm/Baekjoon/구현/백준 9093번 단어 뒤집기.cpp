#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> split(string str, char delimiter);

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt;
    cin >> cnt;

    cin.ignore(1001, '\n'); // 버퍼에 '\n'이 남아있기 때문에 버퍼를 비워줌

    for (int k = 0; k < cnt; k++)
    {
        string input;
        getline(cin, input);

        vector<string> v = split(input, ' ');

        for (int i = 0; i < v.size(); i++)
        {
            reverse(v[i].begin(), v[i].end());
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}