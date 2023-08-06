#include <iostream>
using namespace std;

int a[1000001], sorted[1000001];

void merge(int left, int right)
{
	int mid;
	int p1, p2, p3;

	if (left < right)
	{
		mid = (left + right) / 2;

		merge(left, mid);
		merge(mid + 1, right);

		p1 = left;
		p3 = left;
		p2 = mid + 1;

		while (p1 <= mid && p2 <= right)
		{
			if (a[p1] <= a[p2]) sorted[p3++] = a[p1++];
			else sorted[p3++] = a[p2++];
		}

		while (p1 <= mid) sorted[p3++] = a[p1++];

		while (p2 <= right) sorted[p3++] = a[p2++];

		for (int i = left; i <= right; i++)
		{
			a[i] = sorted[i];
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	merge(1, n);

	for (int i = n; i > 0; i--)
	{
		cout << a[i] << "\n";
	}
	return 0;
}
