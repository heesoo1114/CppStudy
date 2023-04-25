#include<iostream>
#include<queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    priority_queue<int> pqmax;
    priority_queue<int, vector<int>, greater<int>> pqmin;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pqn;
        cin >> pqn;

        if (pqmax.size() == pqmin.size())
        {
            pqmax.push(pqn);
        }
        else
        {
            pqmin.push(pqn);
        }

        if (!pqmax.empty() && !pqmin.empty() && pqmax.top() > pqmin.top())
        {
            int imax, imin;
            
            imax = pqmax.top();
            imin = pqmin.top();

            pqmax.pop();
            pqmin.pop();

            pqmax.push(imin);
            pqmin.push(imax);
        }

        cout << pqmax.top() << '\n';
    }
}