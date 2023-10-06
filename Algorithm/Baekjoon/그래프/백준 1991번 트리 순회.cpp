#include <iostream>
#include <map>
using namespace std;

void PreOrder(char ch);
void InOrder(char ch);
void PostOrder(char ch);

map<char, pair<char, char>> node;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    char lname, name, rname;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> lname >> rname;
        node[name] = { lname, rname };
    }

    PreOrder('A');
    cout << "\n";
    InOrder('A');
    cout << "\n";
    PostOrder('A');
    cout << "\n";
}

void PreOrder(char ch)
{
    if (ch == '.') return;

    cout << ch;
    PreOrder(node[ch].first);
    PreOrder(node[ch].second);
}

void InOrder(char ch)
{
    if (ch == '.') return;

    InOrder(node[ch].first);
    cout << ch;
    InOrder(node[ch].second);
}

void PostOrder(char ch)
{
    if (ch == '.') return;

    PostOrder(node[ch].first);
    PostOrder(node[ch].second);
    cout << ch;
}