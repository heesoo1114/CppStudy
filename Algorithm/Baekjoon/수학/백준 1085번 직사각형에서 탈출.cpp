#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minX = min(x, (w - x));
	int minY = min(y, (h - y));

	int answer = min(minX, minY);

	cout << answer;
}