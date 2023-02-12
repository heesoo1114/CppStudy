#include <iostream>

using namespace std;

int main()
{
    /*
        1차원 배열이 아니더라도 메모리 내에서 1차원적으로 저장됨
        
        2차원 배열은 1차원 배열이 연속으로 있다고 생각하면 됨

        -> 그렇기 때문에 row가 1 차이나더라도 array1에서 5가 할당되어 있는 원소와 6이 할당되어 있는 원소의 메모리 주솟값이 4 밖에 차이 나지 않음 
    */

    const int row = 3;
    const int columns = 5;

    int array1[row][columns] =
    {
        // columns1~5
        {1, 2, 3, 4, 5},        // row1
        {6, 7, 8, 9, 10},       // row2
        {11, 12, 13, 14, 15}    // row3
    };

    int array2[2][3] = { 0 };
    /*
        { 0, 0, 0 },
        { 0, 0, 0 }
    */

    int array3[row][columns] =
    {
        {1, 2, },  // { 1, 2, 0, 0, 0 } 빈 부분은 0으로 채워짐
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    int array4[][columns] =  
    {
        {1, 2, },   // { 1, 2, 0, 0, 0 }
        {1, },  // { 1, 0, 0, 0, 0 }          빈 부분은 0으로 채워짐
        {1, 2, 3, 4, 5}
    }; // 초기화 부분으로 row를 알 수 있기 때문에 row는 꼭 써주지 않아도 됨

    int array5[][]; // (에러코드)
    int array6[][2]; // (에러코드) columns는 알 수 있지만 초기화 부분이 없어서 row를 알 수 없음

	return 0;
}