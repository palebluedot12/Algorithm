#include <bits/stdc++.h>
using namespace std;


int d[1005]; // 2 x n 크기의 직사각형을 타일로 채우는 방법의 수

int main()
{
	int n;
	cin >> n;

	// 2x1이면 D[n-1], 1x2면 D[n-2] 임.
	d[1] = 1;
	d[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		d[i] = (d[i - 1] + d[i - 2]) % 10007;
	}
	cout << d[n];
}