#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countChanges(const vector<string>& board, int x, int y, char firstColor) {
    int count = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            char expected = ((i + j) % 2 == 0) ? firstColor : (firstColor == 'W' ? 'B' : 'W');
            if (board[x + i][y + j] != expected)
                ++count;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for (int i = 0; i < n; ++i)
        cin >> board[i];

    int minChanges = 64; // 최악의 경우

    for (int i = 0; i <= n - 8; ++i) {
        for (int j = 0; j <= m - 8; ++j) {
            int wStart = countChanges(board, i, j, 'W');
            int bStart = countChanges(board, i, j, 'B');
            minChanges = min({ minChanges, wStart, bStart });
        }
    }

    cout << minChanges << endl;
    return 0;
}
