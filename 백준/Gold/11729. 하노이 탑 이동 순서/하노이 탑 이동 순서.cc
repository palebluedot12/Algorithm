#include <bits/stdc++.h>

using namespace std;

// a에서 b기둥으로 n개를 옮긴다
void hanoi(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}
	hanoi(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	hanoi(6 - a - b, b, n - 1);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	cout << (1 << k) - 1 << '\n'; // 왼쪽 시프트, 2^k-1을 뜻함
	hanoi(1, 3, k);
}