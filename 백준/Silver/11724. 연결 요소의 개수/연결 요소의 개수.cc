#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];

int main()
{
	int n, m; // 정점 개수 n, 간선 개수 m
	cin >> n >> m;

	// 간선 입력 받고 그래프 만들기
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// BFS
	int num = 0;
	for (int i = 1; i <= n; i++)
	{
		if (vis[i]) continue;
		num++;
		queue<int> q;
		q.push(i);
		vis[i] = true;

		while (!q.empty())
		{
			int cur = q.front(); q.pop();
			for (auto nxt : adj[cur])
			{
				if (vis[nxt]) continue;
				q.push(nxt);
				vis[nxt] = true;
			}
		}
	}
	cout << num;
}