#include <iostream>
using namespace std;

const int INF = 1e9;
int N, S, A[100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;
    for (int i = 0; i < N; i++) cin >> A[i];

    int left = 0, sum = 0, minLen = INF;

    for (int right = 0; right < N; right++) {
        sum += A[right];    // 현재 부분합에 포함
        while (sum >= S) {  // 조건 만족하면 최소 길이 갱신
            minLen = min(minLen, right - left + 1);
            sum -= A[left]; // 왼쪽 요소 제거
            left++;         // 구간 축소
        }
    }
    cout << (minLen == INF ? 0 : minLen) << '\n';
}
