#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int R, C;
string board[1002];
int fire[1002][1002];
int jihun[1002][1002];
queue<pair<int, int>> fq, jq;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;
    for (int i = 0; i < R; i++) 
        cin >> board[i];
    
    // 초기화
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            fire[i][j] = -1;
            jihun[i][j] = -1;
            if (board[i][j] == 'F') 
            {
                fq.push({i, j});
                fire[i][j] = 0;
            }
            if (board[i][j] == 'J') 
            {
                jq.push({i, j});
                jihun[i][j] = 0;
            }
        }
    }

    // 불 BFS
    while (!fq.empty()) 
    {
        auto cur = fq.front(); fq.pop();
        for (int dir = 0; dir < 4; dir++) 
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (fire[nx][ny] != -1 || board[nx][ny] == '#') continue;

            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            fq.push({nx, ny});
        }
    }

    // 지훈 BFS
    while (!jq.empty()) 
    {
        auto cur = jq.front(); jq.pop();

        for (int dir = 0; dir < 4; dir++) 
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            // 탈출 성공
            if (nx < 0 || nx >= R || ny < 0 || ny >= C) 
            {
                cout << jihun[cur.X][cur.Y] + 1 << '\n';
                return 0;
            }

            if (jihun[nx][ny] != -1 || board[nx][ny] == '#') continue;
            
            // 불보다 먼저 도착해야 함
            if (fire[nx][ny] != -1 && fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) continue;

            jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
            jq.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE\n";
}