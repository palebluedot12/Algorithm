#include <iostream>
using namespace std;

const int MAX = 1001; 
bool isPrime[MAX] = { 1,}; // 소수 여부를 저장. true면 소수, false면 지워진 수

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0; 

    for (int i = 2; i < MAX; i++){
        isPrime[i] = true;
    }

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) { 
            for (int j = i; j <= N; j += i) { 
                if (!isPrime[j]) continue; 
                isPrime[j] = false; 
                count++; 
                if (count == K) { // K번째로 지워진 수라면 출력 후 종료
                    cout << j << '\n';
                    return 0;
                }
            }
        }
    }

    return 0;
}
