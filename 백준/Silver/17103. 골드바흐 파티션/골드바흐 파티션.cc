#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main()
{
	// 2보다 큰 짝수는 두 소수의 합으로 나타낼 수 있다
	// 짝수 N이 주어졌을 때, 골드바흐 파티션의 개수
	// n은 100만까지

	// n까지 소수를 다 구하고
	// a + b = n인 소수 조합 => b = n - a, a는 n/2까지 루프 돌며 isPrime 확인
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<bool> isPrime(MAX + 5, true);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= MAX; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= MAX; j += i)
				isPrime[j] = false;
		}
	}

	int T, n;
	cin >> T;

	while (T--)
	{
		cin >> n;

		int cnt = 0;
		for (int a = 2; a <= n / 2; a++) // 중복방지
		{
			int b = n - a;
			if (isPrime[a] && isPrime[b]) cnt++;
		}
		cout << cnt << '\n';
	}

}