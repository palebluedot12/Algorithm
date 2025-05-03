#include <bits/stdc++.h>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;

		int cnt = 0;
		vector<bool> isPrime(2 * n + 1, true);
		isPrime[1] = false;

		for (int i = 2; i * i <= 2 * n; i++)
		{
			if (isPrime[i])
			{
				for (int j = i * i; j <= 2 * n; j += i)
					isPrime[j] = false;
			}
		}

		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (isPrime[i])
				cnt++;
		}

		cout << cnt << '\n';
	}

}