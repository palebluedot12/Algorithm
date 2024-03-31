#include <iostream>
#include <string> // 문자열을 사용하기 위해 추가
using namespace std;

int main(void){
    string A, B; // 문자열로 변경
    long long sum = 0;

    cin >> A >> B;

    // 문자열의 각 자리수를 순회하면서 곱의 합을 구함
    for (int i = 0; i < A.length(); i++){
        for (int j = 0; j < B.length(); j++){
            // 문자열의 각 자리수를 정수로 변환하여 곱셈
            sum += (A[i] - '0') * (B[j] - '0');
        }
    }

    cout << sum;
    return 0;
}
