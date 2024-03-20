#include <iostream>

using namespace std;

int main() {
    char words[100] = {};
    int i = 0;
    cin >> words;
    
    while(words[i] != '\0'){
        cout << words[i];
        i++;

        if (i != 0 && (i % 10 == 0)){
            cout << '\n';
        }
    }
    
    
}