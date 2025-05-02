#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	ll a, b;
	
	cin >> a >> b;
	ll result = a / gcd(a, b) * b;
	cout << result << '\n';
	
}