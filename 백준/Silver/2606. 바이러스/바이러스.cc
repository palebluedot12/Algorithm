#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<int> adj[102];
bool vis[102];

int bfs(int cur)
{
	int area = 0;
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		for (auto nxt : adj[cur])
		{
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
			area++;
		}
	}

	return area;
}

int main()
{
	int v, e;
	int v1, v2;

	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		cin >> v1 >> v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}

	q.push(1);
	vis[1] = true;

	cout << bfs(1);

}
