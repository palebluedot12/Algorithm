#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n);

	int mini = INT_MAX;
	int st = 0, en = n - 1;
	int idx1 = 0, idx2 = n - 1;

	while (st < en)
	{
		int sum = a[st] + a[en];
		if (abs(sum) < mini)
		{
			mini = abs(sum);
			idx1 = st;
			idx2 = en;
		}

		if (sum < 0) st++;
		else en--;
	}

	cout << a[idx1] << " " << a[idx2];
}
