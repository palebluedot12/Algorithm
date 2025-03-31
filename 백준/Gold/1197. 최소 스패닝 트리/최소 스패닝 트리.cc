#include <bits/stdc++.h>

using namespace std;

vector<int> p(10005, -1);
tuple<int, int, int> edge[100005];

int find(int x)
{
	if (p[x] < 0) return x;
	return p[x] = find(p[x]);
}

bool is_diff_group(int u, int v)
{
	u = find(u);
	v = find(v);
	if (u == v) return false;
	if (p[v] < p[u]) swap(u, v); // v가 u의 자식으로 들가야 하는데, v의 랭크가 더 높아버리면 둘이 바꾼다
	if (p[u] == p[v]) p[u]--; // 랭크가 같은 경우, u의 랭크를 더 높게 한다
	p[v] = u; // v를 u의 자식으로 만든다
	return true;
}

int main()
{
	int v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int a, b, cost;
		cin >> a >> b >> cost;
		edge[i] = { cost, a, b };
	}

	sort(edge, edge + e);
	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < e; i++)
	{
		int a, b, cost;
		tie(cost, a, b) = edge[i];
		if (!is_diff_group(a, b)) continue; // 둘이 그룹 같으면 추가 X
		ans += cost;
		cnt++;
		if (cnt == v - 1) break;
	}
	cout << ans;
}