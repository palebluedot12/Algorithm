#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N;
    cin >> N;

    deque<pair<int, int>> dq; // (풍선 번호, 이동 값)

    for (int i = 0; i < N; i++) {
        int move;
        cin >> move;
        dq.push_back({i + 1, move});
    }

    while (!dq.empty()) {
        // 현재 풍선 터뜨리기
        auto [idx, move] = dq.front();
        dq.pop_front();
        cout << idx << " ";

        if (dq.empty()) break; // 마지막 풍선 터뜨렸으면 종료

        // 오른쪽또는 왼쪽으로 이동
        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < abs(move); i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}