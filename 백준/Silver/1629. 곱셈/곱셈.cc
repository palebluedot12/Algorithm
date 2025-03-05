#include <iostream>
using namespace std;

long long power(long long a, long long b, long long c) {
    if (b == 0) return 1;                   // A^0 = 1, base condition
    long long half = power(a, b / 2, c);
    half = (half * half) % c;               // A^(B/2) * A^(B/2)
    if (b % 2 == 1) return (half * a) % c;  // 홀수면 추가로 a 곱하기
    return half;
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    cout << power(A, B, C) << endl;
    return 0;
}
