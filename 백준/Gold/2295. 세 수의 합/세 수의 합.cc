#include <bits/stdc++.h>

using namespace std;

int a[1005];
vector<int> two;

int main()
{
	int n;	// 몇 개?
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	// 두 수의 합 배열
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			two.push_back(a[i] + a[j]);
		}
	}

	sort(two.begin(), two.end());

	// 가장 큰 d를 출력, for문 거꾸로 돌려서(큰 수부터) 찾으면 바로 return
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (binary_search(two.begin(), two.end(), a[i] - a[j]))
			{
				cout << a[i];
				return 0;
			}
		}
	}

}