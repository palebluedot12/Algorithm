#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (char &c : str) { // 각 문자에 대한 참조를 이용
        if (c >= 'a' && c <= 'z') c -= 32; // 소문자를 대문자로
        else if (c >= 'A' && c <= 'Z') c += 32; // 대문자를 소문자로
    }
    
    cout << str;
    
    return 0;
}