#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int temp = numbers[i] + numbers[j];
            bool isNot = false;

            for (int k = 0; k < answer.size(); k++)
            {
                if (temp == answer[k])
                {
                    isNot = true;
                }
            }

            if (!isNot)
            {
                answer.push_back(temp);
            }
        }
    }

    sort(answer.begin(), answer.end());

    return answer;
}

int main()
{
    vector<int> v = { 5, 0, 2, 7 };
    vector<int> temp = solution(v);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}