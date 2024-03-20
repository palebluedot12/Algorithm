// 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 
// 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력하시오.

#include <iostream>

using namespace std;

int main(void) {
    int dividend = 0, divisor = 0;
    int k = 0;
    int count = 0;

    cin >> dividend >> k;

    for (int i = 1; i <= dividend; i++){
        if (dividend % i == 0) {
            count++;
            if (count == k) {
                cout << i;
                break;
            }
        }
    }

    if (count < k) cout << 0;


    
    
}