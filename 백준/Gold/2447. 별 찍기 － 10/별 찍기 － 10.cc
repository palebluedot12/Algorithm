#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> board;

void drawStar(int x, int y, int size) 
{
    if (size == 1) 
    {
        board[x][y] = '*';
        return;
    }

    int nextSize = size / 3;

    for (int dx = 0; dx < 3; ++dx) 
    {
        for (int dy = 0; dy < 3; ++dy) 
        {
            if (dx == 1 && dy == 1) 
            {
                // 가운데는 공백으로
                continue;
            }
            drawStar(x + dx * nextSize, y + dy * nextSize, nextSize);
        }
    }
}

int main() {
    int N;
    cin >> N;

    // 배열 만들고
    board.resize(N, vector<char>(N, ' '));

    // 재귀 스타또
    drawStar(0, 0, N);

    // 출력
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}