#include <iostream>
using namespace std;

long long comb(int n, int r) {
    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << comb(M, N) << "\n";
    }
    return 0;
}
