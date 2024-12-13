#include <bits/stdc++.h>
#define X first
#define Y second

char board[101][101];
int dist[101][101];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

using namespace std;

int main()
{
	queue<pair<int, int>> Q;
	int n, m;
	cin >> n >> m;

	// 보드 입력 받는다
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			board[i][j] = s[j];
		}
	}

	for (int i = 0; i < n; i++) fill(dist[i], dist[i] + m, '-1');

	// 시작점 방문표시 하고 push한다
	dist[0][0] = 1;
	Q.push({ 0,0 });

	// 큐 빌때까지 길찾는다. cur이 (N,M) 이 되면 종료한다.
	// dist는 어디서 ++ 해야하지..?? BFS라 방문할때마다 올리면 안되는데.. 최단거리, 최단거리...
	// 갔다가 다시 돌아오면 최단거리가 아닌거임.  
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

			// 여기 왜걸리는데??? => 1이 아니고 '1' 씨ㅣㅣㅣㅣㅣ이이이바 
			if (dist[nx][ny] != '-1' || board[nx][ny] != '1') continue;
			
			dist[nx][ny] = dist[cur.X][cur.Y]+1;
			Q.push({ nx, ny });
		}
	}
	cout << dist[n-1][m-1];
}