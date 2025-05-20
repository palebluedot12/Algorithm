#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    int num = stoi(s);
    bool contains7 = s.find('7') != string::npos;
    bool divisibleBy7 = (num % 7 == 0);

    if (!contains7 && !divisibleBy7)
        cout << 0 << endl;
    else if (!contains7 && divisibleBy7)
        cout << 1 << endl;
    else if (contains7 && !divisibleBy7)
        cout << 2 << endl;
    else // contains7 && divisibleBy7
        cout << 3 << endl;

    return 0;
}
