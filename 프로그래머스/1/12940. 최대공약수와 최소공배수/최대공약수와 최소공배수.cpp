#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> solution(int n, int m) {
    long long g = gcd(n, m);
    long long l = (n / g) * m;
    
    return {(int)g, (int)l};
}