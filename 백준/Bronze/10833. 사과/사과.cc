#include <iostream>

using namespace std;

int main(void) {
    int T = 0; // test case
    cin >> T;

    int student = 0, apple = 0;
    int sum = 0;

    for (int i = 0; i < T; i++){
        cin >> student >> apple;
        sum += apple % student;
    }

    cout << sum;

}