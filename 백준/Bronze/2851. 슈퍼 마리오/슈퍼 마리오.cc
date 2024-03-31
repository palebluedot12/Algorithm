#include <iostream>
#include <cmath>
using namespace std;

int main(void){

    int sum = 0;
    int mushroom[10] = {0};
    int display = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> mushroom[i];
    }

    for (int i = 0; i < 10; i++){
        sum += mushroom[i];

        display = sum;

        if (sum >= 100)
        {
            if (abs(100 - sum) <= abs(100-(sum-mushroom[i])))
            {
                display = sum;
            }
            else 
            {
                display = sum - mushroom[i];
            }
            break;
        }
    }

    cout << display;
}