#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
    
    int score;    
    int max = 0;
    int max_idx;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }


        if (i == 0) {
            max_idx = i;
            max = sum;
        }
        else {
            if (sum >= max){
                max_idx = i;
                max = sum;
            }
        }


    }

    cout << max_idx + 1 << ' ' << max;

}