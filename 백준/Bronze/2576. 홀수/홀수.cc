#include <iostream>

using namespace std;


int main(void){

    int min = -1;
    int num = 0;
    int sum = 0;

    for (int i = 0; i < 7; i++){
        cin >> num;

        if (num % 2 == 1) {
            sum += num;
            if (min == -1 || num <= min) {
                min = num;
            }
        }

        
    }

    
    if (sum != 0) cout << sum << '\n'; 
    cout << min;
   
}