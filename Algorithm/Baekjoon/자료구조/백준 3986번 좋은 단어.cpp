#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int caseCount;
    cin >> caseCount;

    int cnt = 0;

    for (int i = 0; i < caseCount; i++)
    {
        string input;
        cin >> input;
        
        stack<int> s;
        for (int j = 0; j < input.size(); j++)
        {
            if (s.empty())
            {
                s.push(input[j]);
                continue;
            }

            if (s.top() == input[j])
            {
                s.pop();
                continue; 
            }
            s.push(input[j]);
        }

        if (s.empty())
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
