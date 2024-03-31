#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    int count = 0; // 0의 개수를 저장
    // N!의 소인수분해에서 5의 개수를 찾기
    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }

    cout << count;
}
