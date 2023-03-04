// https://school.programmers.co.kr/learn/courses/30/lessons/120806

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    
    double temp = (double)num1 / num2 * 1000; 
    // num1을 먼저 double로 형변환 시켜주기
    
    answer = (int)temp;

    return answer;
}

int solution2(int num1, int num2) {
    return (num1 * 1000) / num2;
}

int solution3(int num1, int num2) {
    return (double)num1 / (double)num2 * 1000;
}
