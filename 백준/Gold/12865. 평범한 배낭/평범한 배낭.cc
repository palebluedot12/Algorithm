#include <bits/stdc++.h>
using namespace std;

int n, k;
int w[102], v[102];
int dp[100002]; // dp[j]: 배낭 무게 j일 때의 최대 가치

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  for(int i = 0; i < n; i++)
    cin >> w[i] >> v[i];

  for(int i = 0; i < n; i++) {
    for(int j = k; j >= w[i]; j--) {
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }

  cout << dp[k];
}
