#include <iostream>
using namespace std;

void solve(int cents) {
    int quarter = cents / 25;
    cents %= 25;
    
    int dime = cents / 10;
    cents %= 10;
    
    int nickel = cents / 5;
    cents %= 5;
    
    int penny = cents;

    cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int cents;
        cin >> cents;
        solve(cents);
    }

    return 0;
}
