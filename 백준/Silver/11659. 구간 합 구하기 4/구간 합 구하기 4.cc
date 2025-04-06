#include <bits/stdc++.h>
using namespace std;

int n, m; // 수의 개수 n, 합을 구해야 하는 횟수 m
int a[100005], d[100005];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	d[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = d[i - 1] + a[i];
	}

	while (m--)
	{
		int i, j;
		cin >> i >> j;
		cout << d[j] - d[i - 1] << '\n';
	}
	
}