#include <bits/stdc++.h>
#define X first
#define Y second

// 그림의 개수와, 그림 중 가장 넓이가 넓은 것의 넓이

using namespace std;

bool vis[502][502] = { 0, };
int board[502][502] = { 0, };
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
		
	int num = 0; // 그림의 수
	int mx = 0;  // 그림의 최대 넓이

	/* 
	1. 그림 개수를 어떻게 찾지 ? for문 돌면서 시작점들을 찾아야 할텐데... 그게 시작점이라는걸 어케 앎??
		- 파란 칸(갈수 있는 칸)이고 방문을 안했으면 시작점임!!!

	2. 시작점 아니면 continue, 시작점이면 거기서부터 본격적인 루프 시작.
	*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (vis[i][j] || board[i][j] != 1) continue; // 시작점이 아니면 다음칸으로
			num++;
			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i, j });

			int area = 0;

			while (!Q.empty())
			{
				area++;
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;

					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}
			mx = max(mx, area);
		}
	}

	cout << num << '\n' << mx;
}