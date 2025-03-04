#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> balloons(N);  // (풍선 번호, 이동 값)

    for (int i = 0; i < N; i++) {
        cin >> balloons[i].second;
        balloons[i].first = i + 1;
    }

    int cur = 0; // 현재 터뜨릴 풍선의 인덱스

    for (int i = 0; i < N; i++) {
        int move = balloons[cur].second;  
        cout << balloons[cur].first << " ";

        // 현재 풍선 제거
        balloons.erase(balloons.begin() + cur);

        if (balloons.empty()) break;  // 마지막 풍선이면 종료

        // 다음 이동 위치 계산
        int new_size = balloons.size();

        if (move > 0) {
            cur = (cur + (move - 1)) % new_size;  // 오른쪽 이동
        } else {
            cur = (cur + move) % new_size;  // 왼쪽 이동
            if (cur < 0) cur += new_size;  // 음수면 보정!
        }
    }

    return 0;
}
