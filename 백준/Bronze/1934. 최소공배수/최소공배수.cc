#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int G = gcd(A, B);
        cout << (A * B) / G << '\n';
    }

    return 0;
}
