#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; ++i) {
        int root = (int)sqrt(i);

        // 제곱수 -> 약수의 개수가 홀수
        if (root * root == i) {
            answer -= i; 
        } else {
            answer += i; 
        }
    }

    return answer;
}