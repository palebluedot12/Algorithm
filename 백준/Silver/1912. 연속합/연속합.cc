#include <bits/stdc++.h>
using namespace std;

// n (10만까지) 개 정수
// 연속된 한 개 이상의 수 선택해서 가장 큰 합 출력
long long d[100005];
long long a[100005];


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	d[0] = a[0];
	long long maxSum = d[0];

	for (int i = 1; i < n; i++)
	{
		d[i] = max(a[i], d[i - 1] + a[i]);
		maxSum = max(maxSum, d[i]);
	}

	cout << maxSum << '\n';
	return 0;
}