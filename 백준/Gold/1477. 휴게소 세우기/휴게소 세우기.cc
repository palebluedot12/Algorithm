#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M, L;
    cin >> N >> M >> L;

    int pos[102];  // 휴게소 최대 100개 + 시작점 + 끝점 = 최대 102개
    for (int i = 0; i < N; ++i) {
        cin >> pos[i];
    }

    pos[N] = 0;     // 시작점
    pos[N + 1] = L; // 끝점
    N += 2;         // 총 개수 증가

    sort(pos, pos + N); // 정렬

    int left = 1;
    int right = L;
    int answer = 0;

    while (left <= right) {
        int mid = (left + right) / 2;

        int count = 0;
        for (int i = 1; i < N; ++i) {
            int dist = pos[i] - pos[i - 1];
            count += (dist - 1) / mid;  // 각 구간에 필요한 휴게소 수
        }

        if (count > M) {
            left = mid + 1;  // 너무 많이 필요하면 거리 늘림
        } else {
            answer = mid;    // 가능한 거리 → 줄일 수 있는지 더 탐색
            right = mid - 1;
        }
    }

    cout << answer << endl;
    return 0;
}
