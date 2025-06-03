#include <bits/stdc++.h>
using namespace std;

int board[502][502];
bool vis[502][502];
int n, m;
queue<pair<int, int>> q;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	cin >> n >> m;

	int cnt = 0;  // 그림 개수
	int mx = 0; // 그림 최대 넓이


	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			// 시작점을 찾는다.
			if (vis[i][j] || !board[i][j]) continue;
			cnt++;
			q.push({ i, j });
			vis[i][j] = true;

			int area = 0; // 각 그림의 크기는, 시작점을 새로 찾을때마다 초기화

			while (!q.empty())
			{
                area++;
				auto cur = q.front(); q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					q.push({ nx, ny });
				}
			}
			mx = max(mx, area);

		}

	cout << cnt << '\n' << mx;


}