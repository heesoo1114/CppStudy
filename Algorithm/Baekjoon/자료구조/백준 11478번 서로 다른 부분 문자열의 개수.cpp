#include <iostream>
#include <set>
using namespace std;

int main() 
{
    string input;
    cin >> input;

    set<string> s;

    string temp = "";
    for (int i = 0; i < input.size(); i++) 
    {
        for (int j = i; j < input.size(); j++) 
        {
            temp += input[j];
            s.insert(temp);
        }
        temp = "";
    }

    cout << s.size();
}