#include <bits/stdc++.h>
using namespace std;

int d[1005][3];
int r[1005], g[1005], b[1005];
int n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> r[i] >> g[i] >> b[i];
	}
	
	// d[i][0] = i번째 집까지 칠할때 비용 최솟값, 0은 빨강, 1은 초록, 2는 파랑
	d[1][0] = r[1];
	d[1][1] = g[1];
	d[1][2] = b[1];

	for (int i = 2; i <= n; i++)
	{
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r[i];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g[i];
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + b[i];
	}

	cout << *min_element(d[n], d[n] + 3);
}