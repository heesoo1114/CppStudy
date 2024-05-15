#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:
	int weight = 0;
	int height = 0;
	int rank = 1;
};

int main()
{
	vector<Person> v;

	int personCount;
	cin >> personCount;

	int w, h;
	for (int i = 0; i < personCount; i++)
	{
		cin >> w >> h;
		Person p;
		p.weight = w;
		p.height = h;
		v.push_back(p);
	}

	for (int i = 0; i < personCount; i++)
	{
		for (int j = 0; j < personCount; j++)
		{
			if (v[i].weight < v[j].weight && v[i].height < v[j].height)
			{
				v[i].rank++;
			}
		}

		cout << v[i].rank << " ";
	}
}