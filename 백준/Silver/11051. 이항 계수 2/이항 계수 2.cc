#include <iostream>
using namespace std;

const int MOD = 10007;
int dp[1001][1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i <= N; i++) {
        dp[i][0] = dp[i][i] = 1; // nC0 = 1, nCn = 1
        for (int j = 1; j < i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }
    cout << dp[N][K] << '\n';
}
