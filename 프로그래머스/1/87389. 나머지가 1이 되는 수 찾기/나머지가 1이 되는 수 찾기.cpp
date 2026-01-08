#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int x = 0;
    // n - 1까지
    for (int x = 2; x < n; x++) {
        if (n % x == 1) {
            return x;
        }
    }
}