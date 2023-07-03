#include <iostream>
#include <vector>
using namespace std;

void BinarySearch(vector<int>& age);

int main()
{
	vector<int> age;
	int min, max;
	cout << "������ �ּҰ�, �ִ밪 �Է� : ";
	cin >> min >> max;

	for (int i = min; i < max; i++)
	{
		age.push_back(i);
	}

	cout << "���̰� �´ٸ� YES, �� ���ٸ� UP, �� ���ٸ� DOWN�� �Է��ϼ���." << endl;
	BinarySearch(age);
}

void BinarySearch(vector<int>& age)
{
	int left = 0;
	int right = age.size() - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		string answer;
		cout << age[mid] << "�� �Դϱ�? : ";
		cin >> answer;
		
		if (answer == "yes")
		{
			cout << "WOW~!!";
			return;
		}
		else if (answer == "down")
		{
			right = mid - 1;
		}
		else if (answer == "up")
		{
			left = mid + 1;
		}
	}
	cout << "����� ���ض�" << endl;
	return;
}