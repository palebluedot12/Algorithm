#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> ternary;

    while (n > 0) {
        ternary.push_back(n % 3);
        n /= 3;
    }

    long long answer = 0;
    long long multiplier = 1;

    for (int i = ternary.size() - 1; i >= 0; i--) {
        answer += (long long)ternary[i] * multiplier;
        multiplier *= 3;
    }

    return (int)answer;
}