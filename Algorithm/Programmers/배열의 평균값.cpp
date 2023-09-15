// https://school.programmers.co.kr/learn/courses/30/lessons/120817

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> v) {
    double answer = 0;
    for (int i = 0; i < v.size(); i++)
    {
        answer += v[i];
    }
    return answer / v.size();
}