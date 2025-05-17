#include <bits/stdc++.h>

using namespace std;

int d[100005];
int a[100005];

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        d[i] = d[i - 1] + a[i];
    }

    int result = INT_MIN;
    for (int i = k; i <= n; i++) {
        result = max(result, d[i] - d[i - k]);
    }

    cout << result;
    return 0;
}
