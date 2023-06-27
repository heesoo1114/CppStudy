#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	string order, nums, num;
	int t, numSize;
	bool isError = false, isReverse = false;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		isError = isReverse = false;
		deque<int> deq;
		cin >> order >> numSize >> nums;

		// 덱에 숫자 넣기
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= '0' && nums[i] <= '9')
			{
				num += nums[i];
			}
			else if (nums[i] == ',' || nums[i] == ']')
			{
				if (!nums.empty())
				{
					deq.push_back(stoi(num));
					num = "";
				}
			}
		}
	}
}