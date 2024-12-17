#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

/*
창고에 보관된 토마토들이 며칠이 지나면 다 익게 되는지
max ( dist[nx][ny], dist )
전부다 못익게 되는 경우 (0이 존재하는 경우) -1 출력 << 이거 어케함??
*/
int main()
{
	int M, N;
	cin >> M >> N;
	int distance = 0;
	queue<pair<int, int>> Q;

	bool already_riped = true; // 이미 다 익은 상태인지

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			dist[i][j] = -1;

			if (board[i][j] == 1)
			{
				Q.push({ i, j });	// 시작점이면 큐에 넣는다
				dist[i][j] = 0;     // 시작점은 거리 0
			}
			if (board[i][j] == 0) already_riped = false;

		}
	}

	// 토마토는 한개 이상 입력으로 들어온다. 다 -1일수는 없다.
	// 이미 모든 토마토가 익어있으면 0 출력
	if (already_riped)
	{
		cout << 0;
		return 0;
	}

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (board[nx][ny] == -1 || dist[nx][ny] != -1) continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
			distance = max(dist[nx][ny], distance );
		}
	}

	// BFS 이후에도 익지 않은 토마토가 남아있는지 확인
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++) 
		{
			if (board[i][j] == 0 && dist[i][j] == -1) // 익지 않은 상태
			{ 
				cout << -1;
				return 0;
			}
		}
	}

	// 0이 존재하면 (막혀있어서 다 못익으면 -1 출력 => 
	// 이미 다 익어있으면 0 출력
	cout << distance;


}