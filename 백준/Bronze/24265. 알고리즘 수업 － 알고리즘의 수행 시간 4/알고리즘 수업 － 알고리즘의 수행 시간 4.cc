#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;
    long long sum = 0;
    for (long long i = n - 1; i >= 1; i--) sum += i;
    cout << sum << '\n';   // 수행 횟수
    cout << 2 << '\n';   // 최고차항 차수
    return 0;
}
