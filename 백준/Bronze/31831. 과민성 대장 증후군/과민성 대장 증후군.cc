#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int stress = 0;
    int pain_days = 0;

    for (int i = 0; i < N; ++i) {
        stress += A[i];

        if (stress < 0) {
            stress = 0;
        }

        if (stress >= M) {
            ++pain_days;
        }
    }

    cout << pain_days << endl;

    return 0;
}
