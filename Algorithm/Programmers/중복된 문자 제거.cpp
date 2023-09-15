#include <vector>
#include <iostream>
#include <set>
#include <string>
using namespace  std;

string solution(string str) {
    string answer = "";
    set<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (s.find(str[i]) == s.end())
        {
            s.insert(str[i]);
            answer.push_back(str[i]);
        }
    }
    return answer;
}

int main()
{
    cout << solution("We are the world") << endl;
}