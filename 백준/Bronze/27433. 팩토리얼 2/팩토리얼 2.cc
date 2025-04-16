#include <bits/stdc++.h>
using namespace std;

long long fac(int n)
{
	if (n <= 1) return 1;
	long long val;
	val = n * fac(n - 1);
	return val;
}
int main()
{
	long long result = 1;
	int n;
	cin >> n;
	result = fac(n);
	cout << result;

}