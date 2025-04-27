#include <iostream>
#include <vector>
using namespace std;

vector<int> divisor(int n) {
    vector<int> div;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i != n) div.push_back(i);
        }
    }
    
    for (int j = (int)div.size() - 1; j >= 0; j--) {
        if (div[j] * div[j] == n) continue;
        int other = n / div[j];
        if (other != n) div.push_back(other);
    }
    
    return div;
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        
        vector<int> divs = divisor(n);
        
        int sum = 0;
        for (int d : divs) sum += d;
        
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < divs.size(); i++) {
                cout << divs[i];
                if (i != divs.size() - 1) cout << " + ";
            }
            cout << "\n";
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }
    return 0;
}
