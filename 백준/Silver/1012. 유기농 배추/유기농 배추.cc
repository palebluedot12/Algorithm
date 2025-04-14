#include <bits/stdc++.h>

using namespace std;

// 시작점이 몇개냐를 찾는 문제

int board[51][51];
bool visited[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int T, n, m, num, x, y;
	cin >> T;

	// 테스트 케이스
	while (T--)
	{
        
        memset(board, 0, sizeof(board));
        memset(visited, false, sizeof(visited));
        
        
		int count = 0;
		cin >> n >> m >> num;

		// 배추밭 채우고
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[x][y] = 1;
		}

		queue<pair<int, int>> q;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				// 시작점이 될 수 있으면
				if (!visited[i][j] && board[i][j] == 1)
				{
					visited[i][j] = 1;
					q.push({ i, j });
					count++;

					// bfs
					while (!q.empty())
					{
						auto cur = q.front(); q.pop();
						for (int dir = 0; dir < 4; dir++)
						{
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
							if (visited[nx][ny] || board[nx][ny] != 1) continue;
							visited[nx][ny] = 1;
							q.push({ nx, ny });
						}
					}
				}
			}
		}
		cout << count << '\n';
		
	}

	

	
	
}