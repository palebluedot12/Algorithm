#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    // 위쪽 삼각형 (1 ~ N)
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 0; j < N - i; j++) cout << ' ';
        for (int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }

    // 아래쪽 삼각형 (N-1 ~ 1)
    for (int i = N - 1; i >= 1; i--) 
    {
        for (int j = 0; j < N - i; j++) cout << ' ';
        for (int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}
