#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        a %= 10; 

        if (a == 0) { 
            cout << 10 << '\n';
            continue;
        }

        vector<int> pattern;
        int current = a;
        do {
            pattern.push_back(current);
            current = (current * a) % 10;
        } while (current != a);

        int index = (b - 1) % pattern.size();
        cout << pattern[index] << '\n';
    }

    return 0;
}
