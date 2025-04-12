#include <bits/stdc++.h>

using namespace std;

int tree[1000005]; // 나무

int n;
long long m;

bool solve(long long x)
{
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (tree[i] >= x)
		{
			sum += tree[i] - x;
		}
	}
	return sum >= m; // 개수가 n개보다 많아지는 시점
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> tree[i];

	long long st = 0;
	long long en = 1000000000;

	while (st < en)
	{
		long long mid = (st + en + 1) / 2;
		if (solve(mid)) st = mid;
		else en = mid - 1;
	}
	cout << st;
}