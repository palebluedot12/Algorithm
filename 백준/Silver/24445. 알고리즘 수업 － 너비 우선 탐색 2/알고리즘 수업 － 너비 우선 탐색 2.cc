#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool vis[100005];
int order[100005];
int cnt = 1;
queue<int> q;

void dfs(int cur)
{
    vis[cur] = true;
    order[cur] = cnt++;

    for (int nxt : adj[cur])
    {
        if (!vis[nxt]) dfs(nxt);
    }
}

void bfs(int cur)
{
    while (!q.empty())
    {
        int cur = q.front(); q.pop();
        order[cur] = cnt++;

        for (auto nxt : adj[cur])
        {
            if (vis[nxt]) continue;
            q.push(nxt);
            vis[nxt] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, e, r;
    cin >> v >> e >> r;

    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    for (int i = 1; i <= v; i++) {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    q.push(r);
    vis[r] = true;

    bfs(r);

    for (int i = 1; i <= v; i++) {
        cout << order[i] << '\n';
    }

    return 0;
}
