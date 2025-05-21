#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> x;

	sort(a, a + n);

	int st = 0;
	int en = n - 1;
	int pair = 0;

	while (st < en)
	{
		int sum = a[st] + a[en];
		if (sum == x)
		{
			pair++;
			st++;
			en--;
		}
		else if (sum < x) st++;
		else en--;
	}

	cout << pair;
}