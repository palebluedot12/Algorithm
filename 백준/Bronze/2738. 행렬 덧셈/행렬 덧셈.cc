#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix1[N][M];
    int matrix2[N][M];

    // 첫 번째 행렬 입력
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> matrix1[i][j];

    // 두 번째 행렬 입력
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> matrix2[i][j];

    // 행렬 덧셈 후 출력
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
