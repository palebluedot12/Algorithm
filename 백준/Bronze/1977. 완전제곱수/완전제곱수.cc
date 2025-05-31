#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<int> perfectSquares;

    for (int i = 1; i * i <= N; ++i) {
        int square = i * i;
        if (square >= M) {
            perfectSquares.push_back(square);
        }
    }

    if (perfectSquares.empty()) {
        cout << -1 << '\n';
    } else {
        int sum = 0;
        for (int num : perfectSquares) {
            sum += num;
        }
        cout << sum << '\n';
        cout << perfectSquares.front() << '\n'; // 가장 작은 값 (처음 값)
    }

    return 0;
}
