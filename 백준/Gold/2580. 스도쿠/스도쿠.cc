#include <iostream>
#include <vector>
using namespace std;

int board[9][9];
vector<pair<int, int>> blanks;

bool isValid(int x, int y, int num) {
    // 행, 열 검사
    for (int i = 0; i < 9; ++i) {
        if (board[x][i] == num || board[i][y] == num)
            return false;
    }

    // 3x3 박스 검사
    int startX = (x / 3) * 3;
    int startY = (y / 3) * 3;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[startX + i][startY + j] == num)
                return false;

    return true;
}

bool solve(int idx) {
    if (idx == blanks.size()) {
        // 출력
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j)
                cout << board[i][j] << " ";
            cout << "\n";
        }
        return true; // 정답 찾았으니 끝냄
    }

    int x = blanks[idx].first;
    int y = blanks[idx].second;

    for (int num = 1; num <= 9; ++num) {
        if (isValid(x, y, num)) {
            board[x][y] = num;
            if (solve(idx + 1))
                return true;
            board[x][y] = 0; // 백트래킹
        }
    }

    return false; // 이 숫자는 안 됨
}

int main() {
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0)
                blanks.emplace_back(i, j);
        }

    solve(0);
    return 0;
}
