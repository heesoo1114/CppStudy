// https://school.programmers.co.kr/learn/courses/30/lessons/120829

#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;

    if (0 < angle && angle < 90)
    {
        answer = 1;
    }
    else if (angle == 90)
    {
        answer = 2;
    }
    else if (90 < angle && angle < 180)
    {
        answer = 3;
    }
    else if (angle == 180)
    {
        answer = 4;
    }

    return answer;
}

int solution2(int angle) {
    return (angle <= 90) ? ((angle == 90) ? 2 : 1) : ((angle == 180) ? 4 : 3);
}