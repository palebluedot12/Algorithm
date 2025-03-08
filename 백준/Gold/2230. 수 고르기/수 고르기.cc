#include <bits/stdc++.h>

using namespace std;

// 두 수의 차이 M (같은수일수도 있음)이 주어졌을때, 차가 M이상이면서 가장 작은 거 출력
// N은 10만까지
int n, m;
int a[100005];

const int INF = 2e9;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);

	// 현재 보고 있는 수 x + m 에 대한 lower_bound
    int minDiff = INF;
    for (int i = 0; i < n; i++) {
        int j = lower_bound(a + i, a + n, a[i] + m) - a; // M 이상 차이 나는 첫 위치 찾기
        if (j < n) minDiff = min(minDiff, a[j] - a[i]);
    }
    cout << minDiff << '\n';
}