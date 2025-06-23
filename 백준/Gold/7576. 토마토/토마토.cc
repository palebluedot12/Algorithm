#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int M, N;
	cin >> M >> N;
	int distance = 0;
	queue<pair<int, int>> Q;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1) Q.push({ i, j }); // 익은 토마토
		}
	}

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (board[nx][ny] != 0) continue; // 익지 않은 토마토만

			board[nx][ny] = 1; // 익히고
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			distance = max(distance, dist[nx][ny]);
			Q.push({ nx, ny });
		}
	}

	// 안 익은 토마토가 남아있는지 체크
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (board[i][j] == 0) {
				cout << -1 << '\n';
				return 0;
			}
		}
	}
	cout << distance << '\n';
}
