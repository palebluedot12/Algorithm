#include <iostream>
using namespace std;

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    // 조건 1: a1 <= c
    // 조건 2: (a1 - c) * n0 + a0 <= 0
    if (a1 <= c && (a1 - c) * n0 + a0 <= 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
