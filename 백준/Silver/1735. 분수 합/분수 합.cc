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
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int za = a * d + b * c;     // 분자
    int mo = b * d;           // 분모

    int g = gcd(za, mo); // 최대공약수

    cout << za / g << " " << mo / g << '\n';
    return 0;
}
