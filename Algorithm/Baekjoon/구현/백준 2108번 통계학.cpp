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
	// 개수, 산술평균, 중앙값, 최빈값, 범위 (최댓값과 최솟값의 차이)

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

	//////////////////////////////////// 산술평균 ////////////////////////////////////
	average = int(round((double)sum / n));

	//////////////////////////////////// 중앙값 ////////////////////////////////////
	sort(v.begin(), v.end());
	middle = v[v.size() / 2];

	//////////////////////////////////// 최빈값 ////////////////////////////////////
	double maxCnt = 0; // 횟수 체크
	int maxNum = 0;	// 숫자 크기 체크
	vector<pair<int, double>> vv(m.begin(), m.end()); // 최빈값 저장소

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

	//////////////////////////////////// 범위 ////////////////////////////////////
	diff = max - min;

	// 출력
	cout << average << "\n";
	cout << middle << "\n";
	cout << many << "\n";
	cout << diff << "\n";
}