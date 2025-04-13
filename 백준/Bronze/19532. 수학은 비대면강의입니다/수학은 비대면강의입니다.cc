#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int denominator = a * e - b * d;

    // 정답은 항상 존재한다고 했으니 분모 0 안 됨
    int x = (c * e - b * f) / denominator;
    int y = (a * f - c * d) / denominator;

    cout << x << " " << y;
    return 0;
}
