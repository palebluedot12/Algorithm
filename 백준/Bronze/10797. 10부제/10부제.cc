#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D;

    int count = 0;
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        if (num == D) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
