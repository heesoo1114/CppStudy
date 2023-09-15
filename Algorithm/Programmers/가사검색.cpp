#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool comp(string a, string b)
{
	if (a.length() < b.length())
	{
		return true;
	}
	else if (a.length() == b.length())
	{
		if (a < b)
		{
			return true;
		}
	}
	return false;
}

vector<int> solution(vector<string> words, vector<string> queries) 
{
	vector<int> answer;

	vector<string> revwords = words;

	for (int i = 0; i < revwords.size(); i++)
	{
		reverse(revwords[i].begin(), revwords[i].end());
	}

	// ���ı���: ���̰� ��� �ڷ�, ������ ������������
	sort(words.begin(), words.end(), comp);
	sort(revwords.begin(), revwords.end(), comp);

	// �м��ؾ� �ϴ� ���� �����ŭ ����
	for (int i = 0; i < queries.size(); i++)
	{
		int low, high, idx;
		string strquery = queries[i];

		// 2������ ������
		if (strquery[0] == '?') // 1. ?�� �����ϴ� ���
		{
			reverse(strquery.begin(), strquery.end()); // ?�� �������� ���� �ٽ� �ٲ���
			idx = strquery.find('?'); 
			 
			for (int j = idx; j < strquery.length(); j++)
			{
				strquery[j] = 'a';
			}
			low = lower_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();

			for (int j = idx; j < strquery.length(); j++)
			{
				strquery[j] = 'z';
			}
			high = upper_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();
		}
		else // ?�� �������� �ʴ� ���
		{
			idx = strquery.find('?');
			
			for (int j = idx; j < strquery.length(); j++)
			{
				strquery[j] = 'a';
			}
			low = lower_bound(words.begin(), words.end(), strquery, comp) - words.begin();

			for (int j = idx; j < strquery.length(); j++)
			{
				strquery[j] = 'z';
			}
			high = upper_bound(words.begin(), words.end(), strquery, comp) - words.begin();
		}
		answer.push_back(high - low);

	}

	return answer;
}
int main()
{
	#pragma region FAST
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	vector<string> words;
	vector<string> queries;

	words.push_back("frodo");
	words.push_back("front");
	words.push_back("frost");
	words.push_back("frozen");
	words.push_back("frame");
	words.push_back("kakao");

	queries.push_back("fro??");
	queries.push_back("????o");
	queries.push_back("fr???");
	queries.push_back("fro???");
	queries.push_back("pro?");
	

}