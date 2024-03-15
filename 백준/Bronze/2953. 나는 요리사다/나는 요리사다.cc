#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
    
    int sum2[5];
    int score;
    
    int max = 0;
    int max_idx;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }

        sum2[i] = sum;

        if (i == 0) {
            max_idx = i;
            max = sum2[i];
        }
        else {
            if (sum2[i] >= max){
                max_idx = i;
                max = sum2[i];
            }
        }


    }

    cout << max_idx + 1 << ' ' << sum2[max_idx];

}