#include <bits/stdc++.h>
using namespace std;

int n, k;
int coin[15];

int main()
{
	cin >> n >> k;
	int ans = 0;
	for (int i = 0; i <= n; i++) cin >> coin[i];
	for (int i = n - 1; i >= 0; i--)
	{
		ans += k / coin[i];
		k %= coin[i];
	}

	cout << ans;
	

}