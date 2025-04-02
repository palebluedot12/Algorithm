#include <bits/stdc++.h>

using namespace std;

int d[105][105];
int nxt[105][105]; // 거쳐가는 정점을 넣을 배열
int n, m;
const int INF = 0x3f3f3f3f; // 둘이 더하니까 오버플로우 방지용 7f7f7f7f.. 가 아니라 3f...

int main()
{
	// 도시의 개수 n, 버스의 개수 m
	cin >> n >> m;

	// n^2 크기의 테이블 d를 최대수로 채운다
	for (int i = 1; i <= n; i++)
	{
		fill(d[i], d[i] + 1 + n, INF);
	}

	// 시작 도시와 도착 도시를 연결하는 노선은 하나가 아닐 수 있다.
	// 따라서 d[a][b] = c 가 아니라 min으로 해야함
	while (m--)
	{
		int a, b, c; // 시작, 도착, 비용
		cin >> a >> b >> c;
		d[a][b] = min(d[a][b], c);
		nxt[a][b] = b; 
	}

	// 자기 자신으로 가는건 0
	for (int i = 1; i <= n; i++) d[i][i] = 0;

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (d[i][k] + d[k][j] < d[i][j])
				{
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
					nxt[i][j] = nxt[i][k]; // 이 줄이 핵심
				}

	// 출력
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == INF) cout << "0 ";
			else cout << d[i][j] << ' ';
		}
		cout << '\n';
	}

	// 경로 복원
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == 0 || d[i][j] == INF)
			{
				cout << "0\n";
				continue;
			}
			vector<int> path;
			int st = i;
			while (st != j)
			{
				path.push_back(st);
				st = nxt[st][j];
			}
			path.push_back(j);
			cout << path.size() << ' ';
			for (auto x : path) cout << x << ' ';
			cout << '\n';
		}
	}
}