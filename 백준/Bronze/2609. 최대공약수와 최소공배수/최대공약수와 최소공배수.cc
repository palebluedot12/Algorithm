#include <iostream>

using namespace std;

// 유클리드 호제법
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM 계산 함수
int lcm(int a, int b, int gcdValue) 
{
    return (a / gcdValue) * b; // 오버플로우 방지
}

int main() 
{
    int a, b;
    cin >> a >> b;

    int gcdValue = gcd(a, b);
    int lcmValue = lcm(a, b, gcdValue);

    cout << gcdValue << '\n' << lcmValue << '\n';

    return 0;
}
