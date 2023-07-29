#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<int> v;
	map<int, double> m;

	double n, average, middle, many, diff;
	// ����, ������, �߾Ӱ�, �ֺ�, ���� (�ִ񰪰� �ּڰ��� ����)

	double sum = 0;
	int max = -40001;
	int min = 4000;

	cin >> n;
	int input;
	for (double i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);

		sum += input;
		m[input]++;

		if (input > max)
		{
			max = input;
		}

		if (input < min)
		{
			min = input;
		}
	}

	//////////////////////////////////// ������ ////////////////////////////////////
	average = int(round((double)sum / n));

	//////////////////////////////////// �߾Ӱ� ////////////////////////////////////
	sort(v.begin(), v.end());
	middle = v[v.size() / 2];

	//////////////////////////////////// �ֺ� ////////////////////////////////////
	double maxCnt = 0; // Ƚ�� üũ
	int maxNum = 0;	// ���� ũ�� üũ
	vector<pair<int, double>> vv(m.begin(), m.end()); // �ֺ� �����

	if (v.size() == 1)
	{
		many = vv[0].first;
	}
	else
	{
		sort(vv.begin(), vv.end());
		sort(vv.begin(), vv.end(), cmp);

		many = vv[0].first;
		for (int i = 0; i < vv.size(); i++)
		{
			if (vv[0].second == vv[i].second && vv[0].first != vv[i].first)
			{
				many = vv[i].first;
				break;
			}
		}
	}

	//////////////////////////////////// ���� ////////////////////////////////////
	diff = max - min;

	// ���
	cout << average << "\n";
	cout << middle << "\n";
	cout << many << "\n";
	cout << diff << "\n";
}