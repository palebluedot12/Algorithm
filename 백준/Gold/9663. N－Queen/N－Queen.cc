#include <bits/stdc++.h>
using namespace std;

// n이 15까지니 35로 잡음
bool isused1[35]; // column을 차지하고 있는지 
bool isused2[35]; // / 방향 대각선을 차지하고 있는지
bool isused3[35]; // \ 방향 대각선을 차지하고 있는지

int cnt = 0;
int n;

void func(int cur)
{
	if (cur == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (isused1[i] || isused2[cur + i] || isused3[cur - i + n - 1]) continue;
		isused1[i] = 1;
		isused2[cur + i] = 1;
		isused3[cur - i + n - 1] = 1;
		func(cur + 1);
		// 들어갔다 나왔으면 다시 0으로!
		isused1[i] = 0;
		isused2[cur + i] = 0;
		isused3[cur - i + n - 1] = 0;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
}