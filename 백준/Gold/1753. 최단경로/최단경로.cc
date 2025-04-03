#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int v, e, st;

vector<pair<int, int>> adj[20005]; // 비용, 정점 번호
const int INF = 0x3f3f3f3f;
int d[20005];

int main()
{
	cin >> v >> e >> st;
	fill(d, d + v + 1, INF);

	while (e--)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ w,v });
	}

	priority_queue
		<pair<int, int>,
		vector<pair<int, int>>,
		greater<pair<int, int>>> pq;

	d[st] = 0; 
	pq.push({ d[st], st }); // 우선순위 큐에 (0, 시작점) 추가

	while (!pq.empty())
	{
		auto cur = pq.top(); pq.pop();
		if (d[cur.Y] != cur.X) continue;
		for (auto nxt : adj[cur.Y]) // nxt는 {비용, 정점}
		{
			if (d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
			d[nxt.Y] = d[cur.Y] + nxt.X; // 거쳐가는게 비용이 더 작으면 최단거리 테이블에 값을 갱신
			pq.push({ d[nxt.Y], nxt.Y }); // 하고 우선순위 큐에 추가
		}
	}
	for (int i = 1; i <= v; i++)
	{
		if (d[i] == INF) cout << "INF\n";
		else cout << d[i] << "\n";
	}
}