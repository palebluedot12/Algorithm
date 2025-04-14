#include <bits/stdc++.h>

using namespace std;

int board[27][27];
bool vis[27][27];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

// 단지수, 각 단지 집 개수 오름차순 출력
int main()
{
	int n;
	int count = 0;
	
	vector<int> area;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string line;
		cin >> line;
		for (int j = 0; j < n; j++) {
			board[i][j] = line[j] - '0';  // 문자를 숫자로
		}
	}

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// 시작점이 될 수 있으면
			if (!vis[i][j] && board[i][j] == 1)
			{
				vis[i][j] = 1;
				q.push({ i, j });
				count++;
				int ar = 1;

				while (!q.empty())
				{
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;
						vis[nx][ny] = 1;
						q.push({ nx, ny });
						ar++;
					}
				}
				area.push_back(ar);
			}
		}
	}

	sort(area.begin(), area.end());
	cout << count << '\n';
	for (auto x : area)
		cout << x << '\n';
}