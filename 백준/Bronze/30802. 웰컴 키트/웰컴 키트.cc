#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, T, P;
    vector<long long> sizes(6);

    // 참가자 수 입력
    cin >> N;

    for (int i = 0; i < 6; ++i) {
        cin >> sizes[i];
    }

    cin >> T >> P;

    long long total_shirt_bundles = 0;
    for (int i = 0; i < 6; ++i) {
        total_shirt_bundles += (sizes[i] + T - 1) / T; // 올림 계산
    }

    long long pen_bundles = N / P;
    long long single_pens = N % P;

    cout << total_shirt_bundles << endl;
    cout << pen_bundles << " " << single_pens << endl;

    return 0;
}
