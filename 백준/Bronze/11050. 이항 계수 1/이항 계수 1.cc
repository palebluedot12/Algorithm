#include <bits/stdc++.h>
using namespace std;

//nCk
int main()
{
	int n, k;
	int ret = 1;
	cin >> n >> k;
	
	for (int i = n; i >= 1; i--) ret *= i;
	for (int i = (n - k); i >= 1; i--) ret /= i;
	for (int i = k; i >= 1; i--) ret /= i;

	cout << ret;
}