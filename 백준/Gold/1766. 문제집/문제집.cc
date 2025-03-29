#include <bits/stdc++.h>
using namespace std;

//1. 맨 처음 모든 간선을 읽으며 indegree 테이블을 채움
//2. indegree가 0인 정점들을 모두 큐에 넣음
//3. 큐에서 정점을 꺼내어 위상 정렬 결과에 추가
//4. 해당 정점으로부터 연결된 모든 정점의 indegree 값을 1 감소시킴.이 때 indegree가 0이 되었다면 그 정점을 큐에 추가
//5. 큐가 빌 때 까지 3, 4번 과정을 반복

vector<int> adj[32001];
int deg[32001];
int n, m;


int main()
{
	cin >> n >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		deg[b]++;
	}

	priority_queue<int, vector<int>, greater<int>> q; // indegree가 0인 정점들을 모아놓는 큐
	for (int i = 1; i <= n; i++)
	{
		if (deg[i] == 0) q.push(i); // 시작
	}	

	while (!q.empty())
	{
		int cur = q.top(); q.pop();
		cout << cur << ' ';
		for (int nxt : adj[cur])
		{
			deg[nxt]--;
			if (deg[nxt] == 0) q.push(nxt);
		}
	}


}