#include <iostream>
using namespace std;

int main() {
    int N, M; 
    cin >> N >> M;

    int plane[101][101] = {0};

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                plane[x][y]++;
            }
        }
    }

    // M개 이상으로 덮인 지점의 개수 세기
    int count = 0;
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (plane[x][y] > M) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
