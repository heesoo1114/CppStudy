#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string bomb = "PPAP";
    string str, answer, check;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i];
        if (str[i] == bomb.back() && answer.size() >= bomb.size())
        {
            check = "";
            for (int j = 0; j < bomb.size(); j++)
            {
                check += answer[(answer.size() - bomb.size()) + j];
            }

            if (check == bomb)
            {
                answer.erase(answer.end() - bomb.size(), answer.end());
                answer += "P";
            }
        }
    }

    if (answer == "P" || answer == "")
        cout << "PPAP";
    else
        cout << "NP";
}