#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

int solve(int M, int N, int x, int y) {
    x--; y--;
    int maxYear = lcm(M, N); // M과 N의 최소공배수
    for (int year = x; year < maxYear; year += M) {
        if (year % N == y) return year + 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        cout << solve(M, N, x, y) << '\n';
    }
}
