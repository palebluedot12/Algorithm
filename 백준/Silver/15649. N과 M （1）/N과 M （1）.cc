#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];     // 수열을 담을 배열
bool isused[10]; // 특정 수가 쓰였는지 나타내는

void func(int k)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	// 해당 수를 쓰는 가지에 m개까지 다 찼는가?
	for (int i = 1; i <= n; i++)
	{
		if (!isused[i])
		{
			arr[k] = i;
			isused[i] = 1;
			func(k + 1);
			isused[i] = 0;		// func(k+1) 따라 들어가면서 가지 다 따라갔으면 다시 isused false로 돌려놓겠다.
		}
	}
}
int main()
{
	cin >> n >> m;
	func(0);
}