#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int num = 0;
    if (isdigit(a[0])) num = stoi(a) + 3;
    else if (isdigit(b[0])) num = stoi(b) + 2;
    else if (isdigit(c[0])) num = stoi(c) + 1;

    if (num % 15 == 0) cout << "FizzBuzz" << endl;
    else if (num % 3 == 0) cout << "Fizz" << endl;
    else if (num % 5 == 0) cout << "Buzz" << endl;
    else cout << num << endl;

    return 0;
}
