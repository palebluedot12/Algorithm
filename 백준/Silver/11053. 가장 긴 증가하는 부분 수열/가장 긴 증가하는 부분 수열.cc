#include <bits/stdc++.h>
using namespace std;

int a[1005];
int d[1005]; // i까지 돌았을 때 증가하는 수열

int main()
{
	int n;
	cin >> n;
	fill(d, d + n, 1);
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i]) d[i] = max(d[i], d[j] + 1);
		}
	}

	cout << *max_element(d, d + n);
}