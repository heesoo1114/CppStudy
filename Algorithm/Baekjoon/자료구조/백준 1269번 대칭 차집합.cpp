#include <iostream>
#include <map>
using namespace std;

map<int, bool> m; 
int N, M;
int num;

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N + M; i++)
    {
        cin >> num;

        if (m[num] == true)
        {
            m.erase(num);      
        }
        else if (m[num] == false)
        {
            m[num] = true;   
        }
    }

    cout << m.size() << endl;
}
