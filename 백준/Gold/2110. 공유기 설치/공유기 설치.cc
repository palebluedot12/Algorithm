#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, C;
vector<int> house;

bool canInstall(int distance) {
    int count = 1;
    int last = house[0];

    for (int i = 1; i < N; ++i) {
        if (house[i] - last >= distance) {
            ++count;
            last = house[i];
        }
    }
    return count >= C;
}

int main() {
    cin >> N >> C;
    house.resize(N);
    for (int i = 0; i < N; ++i) cin >> house[i];

    sort(house.begin(), house.end());

    int low = 1;
    int high = house[N - 1] - house[0];
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canInstall(mid)) {
            result = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << result << '\n';
    return 0;
}
